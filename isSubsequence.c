#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <string.h>
bool isSubsequence(char* s, char* t);

bool isSubsequence(char* s, char* t)
{
    // s = "abc", t = "ahbgdc"
    // s = "axc", t = "ahbgdc"
    int index_s = 0;
    int index_t = 0;

    while (index_s < strlen(s) && index_t < strlen(t))
    {
        if (s[index_s] == t[index_t])
        {
            index_s++;
            index_t++;
        }
        else
        {
            index_t++;
        }
    }

    return index_s == strlen(s) ? true : false;
}
