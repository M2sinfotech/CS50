#include<stdio.h>
//this is a prototype for fucntion ADD taking 2 interger values as arguements and returning an interger value
void add();

int main(void)
{

    //this is a call to ADD function;
    add();



}


//This is a defininition of ADD funtion
    void add()
    {
        int mark1=9;
        int mark2=191;

        int result;

        result=mark1+mark2;
        printf("%d",result);



    }

