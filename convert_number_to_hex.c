// #include  <stdio.h>
// #include  <stdlib.h>
// #include  <string.h>
// char* toHex(int num);
// int getLength(int num);
//
// int main(int argc, char* argv[])
// {
//     char* result = toHex(-1);
//
//     printf("%s\n", result);
//     return EXIT_SUCCESS;
// }
//
// char* toHex(int num)
// {
//     if (num == 0)
//         return "0";
//     char hex_char[] = "0123456789abcdef";
//     char* str = (char*)malloc(sizeof(char) * 9);
//     if (num > 0)
//     {
//         int len = getLength(num);
//         int flag = len - 1;
//         while (num > 0)
//         {
//             str[flag] = hex_char[num % 16];
//             num = num / 16;
//             flag--;
//         }
//         str[len] = '\0';
//     }
//     else
//     {
//         unsigned int u_num = num;
//         int flag = 7;
//         int len = 0;
//         while (flag >= 0)
//         {
//             str[flag] = hex_char[u_num % 16];
//             u_num >>= 4;
//             flag--;
//             len++;
//         }
//
//         str[len] = '\0';
//     }
//
//     return str;
// }
//
// int getLength(int num)
// {
//     if (num == 0)
//         return 0;
//     int flag = 0;
//     while (num > 0)
//     {
//         flag++;
//         num = num / 16;
//     }
//     return flag;
// }
