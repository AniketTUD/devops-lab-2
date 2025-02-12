#include<stdio.h>

#define NUMBERS 6

int main()
{
    int nums[NUMBERS] = {5, 2, 6, 64, 15, 10};

    int largest = nums[0];
    int smallest = nums[0];

    for (int i = 0; i < NUMBERS; i++)
    {
        if (largest < nums[i])
        {
            largest = nums[i];
        }
        if (smallest > nums[i])
        {
            smallest = nums[i];
        }
    }

    printf("Largest Number: %d\n", largest);
    printf("Smallest Number: %d\n", smallest);
}
