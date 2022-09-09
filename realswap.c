#include<stdio.h>
#include<cs50.h>

void swap(int *, int *);

int main(void)
{
    int a=20,b=10;
    printf("Before swap, a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap, a=%d and b=%d\n",a,b);

}

void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
    printf("In swap function a=%d,b=%d\n",*p,*q);
}