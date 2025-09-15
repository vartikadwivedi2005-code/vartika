#include<stdio.h>

int main()
{
    int arr[5] = {45, 34, 67, 89, 12};
    
    printf("Checking even/odd for array elements:\n");
    
    
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0) {
            printf("arr[%d] = %d is EVEN\n", i, arr[i]);
        } else {
            printf("arr[%d] = %d is ODD\n", i, arr[i]);
        }
    }
    
    return 0;
}