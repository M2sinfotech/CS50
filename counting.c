#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int count=1;
    //count from 1 to 10 using loops
    while(count<=10)
    {
        //printf("%d, ",count);

        if(count<10)
        {
            printf("%d, ",count);
        }
        else
        {
            printf("%d",count);
        }
        count=count+1;

    }
    printf("\n");
}