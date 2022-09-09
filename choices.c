#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int number;
    number=get_int("Enter any Number: \n");
    //scanf("%d",&number);

    if(number%2==0)
    {
        printf("Number is Even.\n");

    }
    else
    {
        printf("Number is Odd");
    }

}