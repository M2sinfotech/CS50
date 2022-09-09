#include<stdio.h>
#include<cs50.h>

int fact(int);

int main(void)
{
    int number=get_int("get factorial for number:\n");
    int factorial=fact(number);
    printf("Factorial of %d is %d\n",number,factorial);
}

int fact(int n)
{
    if(n==1)
        return 1;

    else
        return(n*fact(n-1));
}