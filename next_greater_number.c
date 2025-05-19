// #include <stdio.h>
// #include <stdlib.h>
//
// int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize);
//
// int main(int argc, char** argv)
// {
//     int nums1[] = {4, 1, 2};
//     int nums2[] = {1, 3, 4, 2};
//
//     int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
//     int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
//     int returnSize;
//
//     int* ans = nextGreaterElement(&nums1, nums1Size, &nums2, nums2Size, &returnSize);
//
//     for (int i = 0; i < returnSize; i++)
//     {
//         printf("  %d ", ans[i]);
//     }
//     return EXIT_SUCCESS;
// }
//
// int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
// {
//     int* ans = malloc(sizeof(int) * nums1Size);
//     int flag = 0;
//     for (int i = 0; i < nums1Size; i++)
//     {
//         for (int j = 0; j < nums2Size; j++)
//         {
//             //todo
//             if (nums1[i] != nums2[j])
//                 continue;
//
//             int found = 0;
//             for (int k = j + 1; k < nums2Size; k++)
//             {
//                 // 后面一个大于 nums2[i]
//                 if (nums2[k] > nums2[j])
//                 {
//                     ans[flag++] = nums2[k];
//                     found = 1;
//                     break;
//                 }
//             }
//             if (!found)
//             {
//                 ans[flag++] = -1;
//             }
//         }
//     }
//     *returnSize = flag;
//     return ans;
// }
