// #include <stdio.h>
// #include <stdlib.h>
//
//
// int findMaxConsecutiveOnes(int* nums, int numsSize);
//
// int main(int argc, char* argv[])
// {
//     int nums[] = {1, 0, 1, 1, 0, 1};
//     int numSize = sizeof(nums) / sizeof(nums[0]);
//
//
//     int consecutive_ones = findMaxConsecutiveOnes(nums, numSize);
//     printf("%d\n", consecutive_ones);
//     return EXIT_SUCCESS;
// }
//
//
// int findMaxConsecutiveOnes(int* nums, int numsSize)
// {
//     int tempConsecutiveOnes = 0;
//     int tempMaxConsecutiveOnes = 0;
//
//     for (int i = 0; i < numsSize; i++)
//     {
//         if (nums[i] == 0)
//         {
//             if (tempConsecutiveOnes > tempMaxConsecutiveOnes)
//                 tempMaxConsecutiveOnes = tempConsecutiveOnes;
//             tempConsecutiveOnes = 0;
//             continue;
//         }
//         tempConsecutiveOnes++;
//     }
//
//     return tempConsecutiveOnes > tempMaxConsecutiveOnes ? tempConsecutiveOnes : tempMaxConsecutiveOnes;
// }
