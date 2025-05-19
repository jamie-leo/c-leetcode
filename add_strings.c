// #include  <stdio.h>
// #include  <string.h>
// #include  <stdlib.h>
//
//
// char* addStrings(char* num1, char* num2);
// char* addStringsImpl(char* num1, char* num2);
//
// int main(int argc, char* argv[])
// {
//     char* result = addStrings("999", "999");
//     printf("%s\n", result);
//     return EXIT_SUCCESS;;
// }
//
// char* addStrings(char* num1, char* num2)
// {
//     int len1 = strlen(num1); // 3  999 1009
//     int len2 = strlen(num2); // 2  10
//     int maxLen = (len1 > len2 ? len1 : len2) + 1;
//     char* result = (char*)malloc((maxLen + 1) * sizeof(char));
//     result[maxLen] = '\0';
//
//     int carry = 0;
//     int i = len1 - 1;
//     int j = len2 - 1;
//     int k = maxLen - 1;
//     while (i >= 0 || j >= 0 || carry > 0)
//     {
//         int x = (i >= 0) ? num1[i] - '0' : 0;
//         int y = (j >= 0) ? num2[j] - '0' : 0;
//         int sum = x + y + carry;
//         result[k] = (sum % 10) + '0';
//         carry = sum / 10;
//
//         i--;
//         j--;
//         k--;
//     }
//     if (k == -1)
//         return result;
//     else
//         return result + k + 1;
// }
