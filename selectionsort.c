#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int array[5]={5,3,1,4,2};
    int smallest;
    int temp;

    printf("Before sorting the array is:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d  ",array[i]);
    }


    for(int i=0;i<5;i++)
    {
        smallest=i;
        for(int j=i+1;j<5;j++)
        {
            if(array[j]<array[smallest])
            {
                smallest=j;
            }


        }
        temp=array[i];
        array[i]=array[smallest];
        array[smallest]=temp;
        
    }
    printf("After sorting the array is:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d  ",array[i]);
    }

}


