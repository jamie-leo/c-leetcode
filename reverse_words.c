#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverseWords(char *s);
void reverse_string(char *str);
int main()
{
    char *s = "Let's take LeetCode contest";

    char *result = reverseWords(s);
    printf("%s\n", result);
    return EXIT_SUCCESS;
}

char *reverseWords(char *s)
{
    if (s == NULL)
        return NULL;
    char *str = strdup(s);
    int tokenSize = 0;
    char *token = strtok(str, " ");

    while (token != NULL)
    {
        tokenSize++;
        token = strtok(NULL, " ");
    }

    free(str);

    char **tokens = (char **)malloc((tokenSize +1)* sizeof(char *));

    if (tokens == NULL)
        return NULL;

    int i = 0;
    str = strdup(s);
    token = strtok(str, " ");
    while (token && i < tokenSize)
    {
        tokens[i] = (char *)malloc(strlen(token) + 1);
        if (tokens[i] == NULL)
            return NULL;
        reverse_string(token);
        strcpy(tokens[i], token);

        token = strtok(NULL, " ");
        i++;
    }

    free(str);
    tokens[tokenSize] = NULL;


    char *result = (char *)malloc(strlen(s) + 1);
    result[0] = '\0';

    if (result == NULL)
        return NULL;

    for (int i = 0; i < tokenSize; i++)
    {

        strcat(result, tokens[i]);
        if (i < tokenSize-1)
            strcat(result, " ");
    }

    for (int i = 0; i < tokenSize; i++)
    {
        free(tokens[i]);
    }
        
    free(tokens);
    return result;
}


void reverse_string(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
