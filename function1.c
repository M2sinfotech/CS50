#include<stdio.h>
//this is a prototype for fucntion ADD taking 2 interger values as arguements and returning an interger value
int add(int,int);

int main(void)
{

    //this is a call to ADD function;
    int obtained=add(9,191);
    printf("%d",obtained);
    printf("\n");

}


//This is a defininition of ADD funtion
    int add(int mark1 , int mark2)
    {

        int result;

        result=mark1+mark2;

        return result;
    }

