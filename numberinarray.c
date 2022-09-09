
#include<stdio.h>
#include<cs50.h>


int main(void)
{
    int array[10]={1,2,1,4,6,6,8,9,1,1};
    int number=get_int("Enter Searching Element:\n");
    int counter=0;
    for(int i=0;i<10;i++)
    {
        if(number==array[i])
        {
            counter++;
        }
    }

    if(counter==0)
    {
        printf("Not found\n");
    }
    else
    {
        printf("%d occurs %d time in this Array\n",number,counter);
    }
}
