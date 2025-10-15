#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 *
 */

// Constraints:
//
//     1 <= nums.length <= 1000
//     -10^6 <= nums[i] <= 10^6
//
//
//
// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* results = (int*) malloc(numsSize * sizeof(int));
    results[0] = nums[0];
    for (int i = 1; i < numsSize; i++) {
        results[i] = results[i - 1] + nums[i];
    }
    return results;
}
