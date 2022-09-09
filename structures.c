#include<stdio.h>
#include<cs50.h>

struct contact{
    string name;
    long number;
}contact1;

int main(void)
{
    contact1.name="Angel";
    contact1.number=9797979797;
    printf("%s : %li\n",contact1.name,contact1.number);


}