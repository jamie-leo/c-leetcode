// #include  <stdio.h>
// #include  <stdlib.h>
// #include  <string.h>
//
// char** fizzBuzz(int n, int* returnSize);
//
// void free_fizzBuzz(char*** fizz_string, int returnSize);
//
// int main(int argc, char* argv[])
// {
//     int n = 15;
//     int returnSize = 0;
//     char** result = fizzBuzz(n, &returnSize);
//     for (int i = 0; i < returnSize; i++)
//     {
//         printf("%s\n", result[i]);
//     }
//     printf("\n");
//     free_fizzBuzz(&result, returnSize);
//     return 0;
// }
//
// char** fizzBuzz(int n, int* returnSize)
// {
//     if (n == 0)
//         return NULL;
//     char** return_arr_str = (char**)malloc(n * sizeof(char*));
//     if (return_arr_str == NULL)
//     {
//         return NULL;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 3 == 0 && i % 5 == 0)
//         {
//             return_arr_str[i - 1] = (char*)malloc(sizeof(char) * 9);
//             strncpy(return_arr_str[i - 1], "FizzBuzz", 8);
//             return_arr_str[i - 1][8] = '\0';
//             continue;
//         }
//
//         if (i % 3 == 0)
//         {
//             return_arr_str[i - 1] = (char*)malloc(sizeof(char) * 9);
//             strncpy(return_arr_str[i - 1], "Fizz", 8);
//             return_arr_str[i - 1][8] = '\0';
//             continue;
//         }
//
//         if (i % 5 == 0)
//         {
//             return_arr_str[i - 1] = (char*)malloc(sizeof(char) * 9);
//             strncpy(return_arr_str[i - 1], "Buzz", 8);
//             return_arr_str[i - 1][8] = '\0';
//             continue;
//         }
//
//         return_arr_str[i - 1] = (char*)malloc(sizeof(char) * 8);
//         sprintf(return_arr_str[i - 1], "%d", i);
//         return_arr_str[i - 1][7] = '\0';
//     }
//     *returnSize = n;
//     return return_arr_str;
// }
//
//
// void free_fizzBuzz(char*** fizz_string, int returnSize)
// {
//     if (fizz_string == NULL)
//         exit(EXIT_FAILURE);
//
//     for (int i = 0; i < returnSize; i++)
//     {
//         free(fizz_string[i]);
//     }
//     free(fizz_string);
//
//     exit(EXIT_SUCCESS);
// }
