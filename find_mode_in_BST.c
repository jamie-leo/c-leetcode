#include  <stdio.h>
#include  <stdlib.h>
#include <string.h>


typedef struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

typedef struct ValFreq
{
    int val;
    int count;
} ValFreq;

ValFreq freqList[10001];
int freqSize = 0;


int* findMode(struct TreeNode* root, int* returnSize);
TreeNode* createNode(int val);
void dfs(TreeNode* root);
void addFreq(int val);

int main(int argc, char* argv)
{
    TreeNode* root = createNode(0);

    int returnSize = 0;
    int* result_mode = findMode(root, &returnSize);

    for (int i = 0; i < returnSize; ++i)
    {
        printf("%d\n", result_mode[i]);
    }


    root->right->left = NULL;
    free(root->right->left);

    root->right = NULL;
    free(root->right);

    root->right = NULL;
    free(root);

    return EXIT_SUCCESS;
}

void addFreq(int val)
{
    for (int index = 0; index < freqSize; ++index)
    {
        if (freqList[index].val == val)
        {
            freqList[index].count++;
            return;
        }
    }
    freqList[freqSize].val = val;
    freqList[freqSize].count++;
    freqSize++;
}


void preOrder(TreeNode* root)
{
    if (root == NULL)
        return;
    printf("%d\n", root->val);
    preOrder(root->left);
    preOrder(root->right);
}

TreeNode* createNode(int val)
{
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}


int* findMode(struct TreeNode* root, int* returnSize)
{
    *returnSize = 0;
    if (root == NULL)
    {
        return NULL;
    }
    freqSize = 0;
    dfs(root);

    if (freqSize == 10001)
    {
        return EXIT_FAILURE;
    }

    // 找到最多出现的
    int maxFreq = 0;
    for (int i = 0; i < freqSize; ++i)
    {
        if (freqList[i].count > maxFreq)
        {
            maxFreq = freqList[i].count;
        }
    }
    int index = 0;
    int* result = malloc(sizeof(int) * freqSize);
    for (int i = 0; i < freqSize; ++i)
    {
        if (freqList[i].count == maxFreq)
        {
            result[index++] = freqList[i].val;
        }
    }
    *returnSize = index;
    return result;
}

void dfs(TreeNode* root)
{
    if (root == NULL)
        return;
    dfs(root->left);
    addFreq(root->val);
    dfs(root->right);
}
