#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int number;
    number=get_int("Enter any Number: \n");
    //scanf("%d",&number);

    if(number>0)
    {
        printf("Number is Positive.\n");

    }
    else if(number<0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is 0");
    }

}