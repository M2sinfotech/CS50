#include<stdio.h>
//this is a prototype for fucntion ADD taking 2 interger values as arguements and returning an interger value
int add();

int main(void)
{

    //this is a call to ADD function;
    int obtained=add();
    printf("%d",obtained);
    printf("\n");

}


//This is a defininition of ADD funtion
    int add()
    {
        int mark1=9;
        int mark2=11;

        int result;

        result=mark1+mark2;

        return result;
    }

