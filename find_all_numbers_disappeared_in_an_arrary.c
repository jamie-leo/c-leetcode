// #include <stdio.h>
// #include <stdlib.h>
//
// int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize);
//
// int main(int argc, char* argv[])
// {
//     int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
//     int size = sizeof(nums) / sizeof(int);
//     int resultSize;
//     int* find_disappeared_numbers = findDisappearedNumbers(nums, size, &resultSize);
//
//     for (int i = 0; i < resultSize; i++)
//     {
//         printf("%d ", find_disappeared_numbers[i]);
//     }
//     return EXIT_SUCCESS;
// }
//
// int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
// {
//     if (nums == NULL || numsSize == 0)
//     {
//         *returnSize = 0;
//         return NULL;
//     }
//
//     int* hashTable = calloc(numsSize + 1, sizeof(int));
//     for (int i = 0; i < numsSize; i++)
//     {
//         hashTable[nums[i]] = 1;
//     }
//
//     int* result = malloc(numsSize * sizeof(int));
//     int index = 0;
//
//     for (int i = 1; i <= numsSize; i++)
//     {
//         if (hashTable[i] == 0)
//         {
//             result[index++] = i;
//         }
//     }
//     free(hashTable);
//     *returnSize = index;
//     return result;
// }
