#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int number=get_int("Enter any Number:");
    int divisor=2;
    int flag=0;

    while(divisor<number)
    {
         if(number%divisor==0 && number!=2 && number!=3)
        {
            flag=1;
            //printf("Number is not Prime\n");
        }

        divisor++;

    }

    if(flag==0 || number==1)

        printf("Number is  Prime\n");

    else
        printf("Number is Not Prime\n");


}
