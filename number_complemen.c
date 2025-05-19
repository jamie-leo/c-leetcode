// //
// // Created by gaming on 5/6/25.
// //
//
// #include <stdio.h>
// #include <stdlib.h>
// int findComplement(int num);
//
// int main(int argc, char** argv)
// {
//     int num = 5;
//     int result = findComplement(num);
//     printf("%d\n", result);
//     return EXIT_SUCCESS;
// }
//
// int findComplement(int num)
// {
//     int mask = 0;
//     int temp = num;
//
//     while (temp > 0)
//     {
//         mask = (mask << 1) | 1;
//         temp >>= 1;
//     }
//     return num ^ mask;
// }
