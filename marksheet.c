#include<stdio.h>
#include<cs50.h>
//prototype
float sum(float,float,float,float,float);
int main(void)
{
    char n=get_char("Enter Your Initial:\n");
    int roll_no=get_int("Enter your Roll number:\n");
    float max=get_float("Max Marks:\n");
    //eng=2.2; not in scope
    float eng,maths,urd,sst,sc;
    eng=get_float("Enter marks for English:");
    maths=get_float("\nEnter marks for Maths:");
    urd=get_float("\nEnter marks for Urdu:");
    sst=get_float("\nEnter marks for SST:");
    sc=get_float("\nEnter marks for Science:");
    //function call
    float obtained=sum(eng,maths,urd,sst,sc);
    printf("\nObtained Marks: %f",obtained);

    float percentage=obtained*100/max;
    printf("\nPercentage: %f%%\n",percentage);





}

    //function definition

float sum(float eng,float maths, float urd, float sst, float sc)
{
    float sum=eng+maths+urd+sst+sc;
    return sum;
}