// #include  <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
//
// #define MAX(a,b) ((a) > (b) ? (a) : (b))
//
// int findLUSlength(char* a, char* b);
//
// int main(int argc, char* argv[])
// {
//     char* a = "aaa";
//     char* b = "aaa";
//     int find_lu_slength = findLUSlength(a, b);
//     printf("find_lu_slength = %d\n", find_lu_slength);
//     return EXIT_SUCCESS;
// }
//
// int findLUSlength(char* a, char* b)
// {
//     if (a == NULL || b == NULL || a == '\0' || b == '\0')
//         return -1;
//     int alen = strlen(a);
//     int blen = strlen(b);
//     if (strcmp(a, b) == 0)
//         return -1;
//     return MAX(alen, blen);
// }
