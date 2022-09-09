#include<stdio.h>
//#include<cs50.h>

int main(void)
{
    int array[10]={5,3,1,4,2,7,6,9,8,10};
    int temp;


    printf("Before sorting the array is:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d  ",array[i]);
    }


    for(int i=0;i<10;i++)
    {
        //smallest=i;
        for(int j=0;j<10;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            //printf("%d  ",array[j]);


        }

    }
    printf("\nAfter sorting the array is:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d  ",array[i]);
    }

}