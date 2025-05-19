// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration);
//
//
// int main(int argc, char** argv)
// {
//     int timeSeries[] = {1,4,10};
//     int duration = 5;
//     int timeSeriesSize = sizeof(timeSeries) / sizeof(int);
//     int result = findPoisonedDuration(timeSeries, timeSeriesSize, duration);
//     printf("%d\n", result);
//     return EXIT_SUCCESS;
// }
//
//
// int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration)
// {
//     int total = 0;
//     for (int i = 0; i < timeSeriesSize - 1; i++)
//     {
//         // 在中毒结束前攻击
//         if ((timeSeries[i] + duration - 1) >= timeSeries[i + 1])
//         {
//             total += timeSeries[i + 1] - timeSeries[i];
//         }
//         else
//         {
//             total += duration;
//         }
//     }
//     total += duration;
//
//     return total;
// }
