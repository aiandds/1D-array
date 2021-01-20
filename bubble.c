#include<stdio.h>

int main (void)
{
    int size, temp;
    
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the value: ");
    
    for(int i = 0; i < size; i++)
    {   
        
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size -i -1; j++)
        {   
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
    }

    printf("The bubble shorted array is \n");
    for(int i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}