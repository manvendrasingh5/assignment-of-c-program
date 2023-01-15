#include <stdio.h>

#define MAX_SIZE 100

void printArr(int *arr, int size);


int main()
{
    int arr[MAX_SIZE];
    int size;
    int *left = arr;  
    int *right;

    printf("Enter size of array: ");
    scanf("%d", &size);

    right = &arr[size - 1];  

    
    printf("Enter elements in array: ");
    while(left <= right)
    {
        scanf("%d", left++);
    }


    printf("\nArray before reverse: ");
    printArr(arr, size);


   
    left = arr;

    while(left < right) 
    {
       
        *left    ^= *right;
        *right   ^= *left;
        *left    ^= *right;

        left++;
        right--;
    }


    printf("\nArray after reverse: ");
    printArr(arr, size);


    return 0;
}
void printArr(int * arr, int size)
{
    int * arrEnd = (arr + size - 1);

    while(arr <= arrEnd)
    {
        printf("%d, ", *arr);

        arr++;
    }
}