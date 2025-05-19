// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <string.h>
//
// int findContentChildren(int* g, int gSize, int* s, int sSize);
//
// int main(int argc, char* argv[])
// {
//     int g[] = {1, 2};
//     int gSize = sizeof(g) / sizeof(int);
//     int s[] = {1, 2,3};
//     int sSize = sizeof(s) / sizeof(int);
//
//     int result = findContentChildren(g, gSize, s, sSize);
//     printf("%d\n", result);
//     return EXIT_SUCCESS;;
// }
//
// /*
// *你有三个孩子和两块小饼干，3 个孩子的胃口值分别是：1,2,3。
// 虽然你有两块小饼干，由于他们的尺寸都是 1，你只能让胃口值是 1 的孩子满足。
// 所以你应该输出 1。
//  */
// int findContentChildren(int* g, int gSize, int* s, int sSize)
// {
//     qsort(s, sSize, sizeof(int), (int (*)(const void*, const void*))strcmp);
//     qsort(g, gSize, sizeof(int), (int (*)(const void*, const void*))strcmp);
//     int i = 0;
//     int j = 0;
//
//     while (i < gSize && j < sSize)
//     {
//         if (g[i] <= s[j])
//         {
//             i++;
//         }
//         j++;
//     }
//     return i;
// }
