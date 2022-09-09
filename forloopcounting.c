#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int count;
    //count from 1 to 10 using loops

    count=1;
    while(count<=10)
    {
        printf("%d",count);
        count=count+1;
    }

    printf("\n");

    for(count=1;count<=10;count++)
    {
        printf("%d",count);
    }



}