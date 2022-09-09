#include<stdio.h>
//prototype
int add(int,int);
int add2(void);
void add3(int,int);
void add4(void);

int main()
{

    printf("Assalamualaikum");
    printf("\n");

    char c='a';
    int i=12345;
    float f=123.460000;
    double d=123456.678;

    // printf("c = %c",c);
    // printf("\n");
    // printf("i = %d",i);
    // printf("\n");
    // printf("i = %f",f);
    // printf("\n");
    // printf("i = %lf",d);
    // printf("\n");

    //increment / decrement
    // int i2;
    // i2=i+1;
    // i=i2;
    // printf("i = %d",i);
    // printf("\n");
    // i=i-1;
    // printf("i = %d",i);
    // printf("\n");
    // i++;
    // printf("i = %d",i);
    // printf("\n");
    // i+=2;
    // printf("i = %d",i);
    // printf("\n");

    //function calls
    int result=add(1,2);
    printf("result = %d",result);
    printf("\n");
    result=add2();
    printf("result = %d",result);
    printf("\n");
    add3(26,11);
    add4();


}

int add(int n1, int n2)
{
    int sum=n1+n2;
    return sum;
}

int add2()
{
    int n1=9;
    int n2=11;
    int sum=n1+n2;
    return sum;
}

void add3(int n1, int n2)
{
    int sum=n1+n2;
    printf("result = %d",sum);
    printf("\n");

}

void add4()
{
    int n1=14;
    int n2=8;
    int sum=n1+n2;
    printf("result = %d",sum);
    printf("\n");

}

