#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

bool compare(string,string);

int main(void)
{

    int size = get_int("Enter Array size:\n");
    int array[size];
    for(int i=0;i<size;i++)
        array[i]=get_int("Enter array element:\n");

    printf("_______________________________________________\n");
    for(int i=0;i<size;i++)
        printf("%d\n",array[i]);

}
