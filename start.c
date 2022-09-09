#include<stdio.h>


int main(void)
{
    //data types
    //char stands for character
    //declaration of a char type of variable named (a)
    char a;
    //initialization
    a='m';

    //integer
    //declaration of int type variable named(i)
    int i;
    //initialization
    i=123;

    //float
    float f;
    f=123.123;

    //strings
    // string s;
    // s="abc @ 123";

    //double
    double d;
    d=12345.123;

    printf("%c",a);
    printf("\n");

    printf("%d",i);
    printf("\n");

    printf("%f",f);
    printf("\n");

    printf("%lf",d);
    printf("\n");


    //increment decrement

    char z=a+1;
    printf("%c",z);
    printf("\n");

    int n=i+1;
    printf("%d",n);
    printf("\n");

    float g=f-1;
    printf("%f",g);
    printf("\n");


    //increment decrement
    a=a+1;
    printf("%c",a);
    printf("\n");

    i=i+1;
    printf("%d",i);
    printf("\n");

    f=f-1;
    printf("%f",f);
    printf("\n");



}
