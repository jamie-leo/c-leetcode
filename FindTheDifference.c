#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char findTheDifference(char* s, char* t);

char findTheDifference(char* s, char* t)
{
    int hashChar[26] = {0};
    int sLen = strlen(s);
    int tLen = strlen(t);
    for (int i = 0; i < sLen; i++)
    {
        hashChar[s[i] - 'a']++;
    }

    for (int i = 0; i < tLen; i++)
    {
        hashChar[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (hashChar[i] == -1)
        {
            return 'a' + i;
        }
    }

    return '\0';
}
