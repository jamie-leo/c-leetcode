// #include <stdio.h>
// #include <stdlib.h>
//
// typedef struct TreeNode
// {
//     int data;;
//     struct TreeNode* left;
//     struct TreeNode* right;
// } TreeNode;
//
// TreeNode* createTreeNode(int data);
//
// int sumOfLeftLeaves(struct TreeNode* root);
// int sumOfLeftLeavesCountLeft(struct TreeNode* root, int* sum);
//
// int main(int argc, char* argv[])
// {
//     TreeNode* root = createTreeNode(3);
//     root->left = createTreeNode(9);
//     root->right = createTreeNode(20);
//     root->right->left = createTreeNode(15);
//     root->right->right = createTreeNode(7);
//     int result = sumOfLeftLeaves(root);
//     printf("sum of left leaves = %d\n", result);
//
//     return EXIT_SUCCESS;
// }
//
// TreeNode* createTreeNode(int data)
// {
//     TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
//     if (newNode == NULL)
//     {
//         printf("Error: Failed to allocate memory for new node\n");
//         exit(EXIT_FAILURE);
//     }
//     newNode->data = data;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }
//
// int sumOfLeftLeaves(struct TreeNode* root)
// {
//     // if (root == NULL)
//     // {
//     //     return 0;
//     // }
//     // int sum = 0;
//     // if (root->left != NULL && root->left->left == NULL && root->left->right == NULL)
//     // {
//     //     sum = root->left->data;
//     // }
//     //
//     // sum += sumOfLeftLeaves(root->left);
//     // sum += sumOfLeftLeaves(root->right);
//     //
//     // return sum;
// }
