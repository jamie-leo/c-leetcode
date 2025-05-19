#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* keyBoardLine[3] = {
    "qwertyuiop",
    "asdfghjkl",
    "zxcvbnm"
};

char** findWords(char** words, int wordsSize, int* returnSize);
bool ifCharExistsLine(char* str, char* word);

int main(int argc, char** argv)
{
    char** words = (char**)malloc(sizeof(char*) * 2);
    words[0] = strdup("adsdf");
    words[1] = strdup("sfd");
    int returnSize = 0;
    char** newWord = findWords(words, 2, &returnSize);

    for (int i = 0; i < returnSize; i++)
    {
        printf("%s\n", newWord[i]);
    }


    return EXIT_SUCCESS;
}

char** findWords(char** words, int wordsSize, int* returnSize)
{
    if (words == NULL || wordsSize < 1 || returnSize == NULL)
        return NULL;

    char** newWords = (char**)malloc(sizeof(char*) * wordsSize);

    int cycleFlag = 2;

    int flag = 0;


    for (int rowId = 0; rowId < wordsSize; rowId++)
    {
        while (cycleFlag >= 0)
        {
            bool ifExists = ifCharExistsLine(keyBoardLine[cycleFlag], words[rowId]);
            if (ifExists)
            {
                newWords[flag++] = strdup(words[rowId]);
            }

            cycleFlag--;
        }
        cycleFlag = 2;
    }


    *returnSize = flag;
    return newWords;
}

bool ifCharExistsLine(char* str, char* word)
{
    // unsigned char charSet[256] = {0};
    //
    // // Mark
    // for (int strIndex = 0; strIndex < strlen(str); strIndex++)
    // {
    //     charSet[str[strIndex]]++;
    // }
    //
    // for (int wordIndex = 0; wordIndex < strlen(word); wordIndex++)
    // {
    //     if (!charSet[word[wordIndex]])
    //     {
    //         return false;
    //     }
    // }
    // return true;


    int lenstr = strlen(str);
    int lenword = strlen(word);

    for (int wordIndex = 0; wordIndex < lenword; ++wordIndex)
    {
        int found = 0;
        for (int strIndex = 0; strIndex < lenstr; ++strIndex)
        {
            if (str[strIndex] == word[wordIndex])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            return false;
        }
    }
    return true;
}
