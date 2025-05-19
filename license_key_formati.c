// #include  <stdio.h>
// #include  <stdlib.h>
// #include <string.h>
// #include <ctype.h>
//
// char* licenseKeyFormatting(char* s, int k);
//
// int main(int argc, char** argv)
// {
//     char s[] = "5F3Z-2e-9-w";
//     int k = 4;
//     char* license_key_formatting = licenseKeyFormatting(s, k);
//     printf(license_key_formatting);
//
//     return EXIT_SUCCESS;
// }
//
//
// char* licenseKeyFormatting(char* s, int k)
// {
//     int sSize = strlen(s);
//
//     int validCharCount = 0;
//
//     for (int i = 0; i < sSize; ++i)
//     {
//         if (s[i] != '-')validCharCount++;
//     }
//
//     int groups = (validCharCount + k - 1) / k;
//     int dashed = groups - 1;
//
//     int resultSize = validCharCount + dashed;
//     char* result = (char*)malloc(sizeof(char) * (resultSize + 1));
//
//     int index = resultSize - 1;
//     result[resultSize] = '\0';
//     int count = 0;
//
//     // from back to front because code simplicity is simple
//     for (int i = sSize - 1; i >= 0; --i)
//     {
//         if (s[i] == '-')
//             continue;
//
//         if (count == k)
//         {
//             result[index] = '-';
//             index--;
//             count = 0;
//         }
//
//         result[index] = s[i];
//         index--;
//         count++;
//     }
//     toupper(result[resultSize - 1]);
//
//     return result;
// }
