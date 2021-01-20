#include<stdio.h>

int main (void)
{
    int size, sum = 0, count;
    float avrg;
    printf("Enter how many person: ");
    scanf("%d", &size);

    float arr[size];

    printf("Enter the Height of %d persons\n",size);
    for(int i = 0; i < size; i++)
    {   
        printf("Enter person %d Height: ",(i+1));
        scanf("%f", &arr[i]);
        sum += arr[i]; 
    }
    avrg = sum / size;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > avrg)
        {
            count++;
        }
    }
    printf("There are %d person above the average height\n", count);
}