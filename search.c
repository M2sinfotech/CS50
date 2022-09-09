vim mode
#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int array[9]={7,5,9,6,4,8,1,3,2};

    int number=get_int("Enter the number you want to search:\n");

    int flag=0;  

    for(int i=0;i<9;i++)
    {
        if(number==array[i])
        {
            flag=1;
        }

    }
    if(flag==1)
    printf("Found.\n");
    else
    printf("Not Found.\n");

}