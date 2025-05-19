// #include <stdio.h>
// #include <stdlib.h>
//
// int thirdMax(int* nums, int numsSize);
//
// int main(int argc, char* argv[])
// {
//     int nums[] = {3,3,4,3,4,3,0,3,3};
//     int numsSize = sizeof(nums) / sizeof(int);
//     int thirdMax(nums, numsSize);
//     printf("%d\n", thirdMax(nums, numsSize));
//     return EXIT_SUCCESS;
// }
//
// int thirdMax(int* nums, int numsSize)
// {
//     int first = 0;
//     int second = 0;
//     int third = 0;
//     int firstSet = 0, secondSet = 0, thirdSet = 0;
//
//     for (int index = 0; index < numsSize; ++index)
//     {
//         if ((firstSet && nums[index] == first) || (secondSet && nums[index] == second) || (thirdSet && nums[index] ==
//             third))
//             continue;
//         if (!firstSet || nums[index] > first)
//         {
//             third = second;
//             second = first;
//             first = nums[index];
//             thirdSet = secondSet;
//             secondSet = firstSet;
//             firstSet = 1;
//         }
//         else if (!secondSet || nums[index] > second)
//         {
//             third = second;
//             second = nums[index];
//             thirdSet = secondSet;
//             secondSet = 1;
//         }
//         else if (!thirdSet || nums[index] > third)
//         {
//             third = nums[index];
//             thirdSet = 1;
//         }
//     }
//
//         return thirdSet ? third : first;
// }
