#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int number=get_int("Enter any Number:");
    int divisor=2;
    int flag=0;
    int i=1;
    while(i<100)
    {
        number=i;
    while(divisor<number)
    {
         if(number%divisor==0 && number!=2 && number!=3)
        {
            flag=1;

        }

        divisor++;

    }

    if(flag==0 || number==1)
    {
         printf("Number is  Prime\n");
         printf("%d\n",number);
    }



    else
        printf("Number is Not Prime\n");
    i++;
    flag=0;

    }



}
