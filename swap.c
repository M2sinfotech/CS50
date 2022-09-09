#include<stdio.h>
#include<cs50.h>

void swap(int, int);

int main(void)
{
    int a=20,b=10;
    printf("a=%d,b=%d\n",a,b);
    swap(a,b);
    printf("a=%d,b=%d\n",a,b);
}

void swap(int p , int q)
{

    int temp;
    temp = p;
    p=q;
    q=temp;
    printf("a=%d,b=%d\n",p,q);


}
