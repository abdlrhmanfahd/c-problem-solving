/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{

    for(int i = 0; i < numsSize; i++)
    {
        for(int j = numsSize - 1; j > i; j--)
        {
            
            int sum = nums[i] + nums[j];
            if(sum == target)
            {
                int* result = (int*)malloc(2*sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }

        }
    }
    return  NULL;
}
