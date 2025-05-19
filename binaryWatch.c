// #include  <stdio.h>
// #include  <stdlib.h>
//
// char** readBinaryWatch(int turnedOn, int* returnSize);
// int countBits(int num);
//
// int main(int argc, char* argv[])
// {
//     int resultSize;
//     char** result = readBinaryWatch(3, &resultSize);
//     for (int i = 0; i < resultSize; i++)
//     {
//         printf("%s\n", result[i]);
//         free(result[i]);
//     }
//     free(result);
//
//
//     return EXIT_SUCCESS;
// }
//
//
// int countBits(int num)
// {
//     int count = 0;
//     while (num)
//     {
//         count += (num & 1);
//         num >>= 1;
//     }
//
//     return count;
// }
//
// char** readBinaryWatch(int turnedOn, int* returnSize)
// {
//     /**
//      *
//      *二进制手表顶部有 4 个 LED 代表 小时（0-11
//      *底部的 6 个 LED 代表 分钟（0-59）。每个 LED 代表一个 0 或 1，最低位在右侧。
//      *给你一个整数 turnedOn ，表示当前亮着的 LED 的数量
//      *返回二进制手表可以表示的所有可能时间
//      */
//
//     char** resultChar = (char**)malloc(sizeof(char*) * 1000);
//     for (int i = 0; i < 1000; i++)
//     {
//         resultChar[i] = (char*)malloc(sizeof(char) * 1000);
//     }
//     *returnSize = 0;
//
//     for (int h = 0; h < 12; h++)
//     {
//         for (int m = 0; m < 60; m++)
//         {
//             if (countBits(h) + countBits(m) == turnedOn)
//             {
//                 sprintf(resultChar[*returnSize], "%d:%02d", h, m);
//                 (*returnSize)++;
//             }
//         }
//     }
//
//     return resultChar;
// }
