#include<stdio.h>

int main (void)
{
    int size, srch;
    
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the value: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value want to search: ");
    scanf("%d",&srch);

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == srch)
        {
            printf("The number %d is present in place %d \n", srch, (i + 1));
            return 0;
        }
    }
    printf("The number %d is not present in the array\n", srch);



}