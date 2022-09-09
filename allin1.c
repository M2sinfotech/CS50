#include<stdio.h>
#include<cs50.h>
//prototype of function named add returning no value and taking no arguements
void add(void);

int add1(int, int);

void add2(int, int);

int add3(void);


int main(void)
{
    //this is the section of declaration and initialization
    char c='a';
    string n="Amaan";
    int i=12345;
    long li=190007123;
    float f=89.04;
    double d=981234.4578;
    int result;



    //this is the section to print all the variable values using placeholders
    printf("%c\n",c);
    //printf("%c",c);
    printf("%i\n",i);
    printf("%li\n",li);
    printf("%f\n",f);
    printf("%lf\n",d);
    //function call
    add();


    if(2>1)
    {
        printf("2 is greater than 1\n");
    }
    add();
    if(2<2)
    {
        printf("1 is smaller than 2\n");
    }
    else
    {
        printf("2 is equal to 2\n");
    }

    int counter;
    counter=10;
    add();

    while(counter>-20)
    {
        printf("%d\n",counter);

        //increment or decrement
        counter=counter-1;

    }
    //printf("%d",result);

}

void add()
{
    //Declaration of 3 variables of integer
    int num1;
    int num2;
    int result;

    //Initialization of 3 declared variables
    num1=100;
    num2=20;
    result=num1+num2+0-100+1000-900;
    //return result;
    printf("%d\n",result);
}