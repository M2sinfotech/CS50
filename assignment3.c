#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n=get_int("Enter 3 digit number: \n");

    if(n>=100&&n<1000)
        printf("A three digit number.\n");
    else
        printf("Not a three digit number.\n");



}