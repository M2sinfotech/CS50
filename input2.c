#include<stdio.h>
#include<cs50.h>

int main(void)
{

    // long mobile;
    // printf("What's Your Number? ");
    // scanf("%li", &mobile);
    // printf("you've entered %li",mobile);

    int age = get_int("What's Your age? ");


    long mobile=get_double("What's Your Number? ");


    char c = get_char("what's initial of your Name? ");

    printf("%d\n",age);
    //printf("\n");
    printf("%li\n",mobile);
    //printf("\n");
    printf("%c\n",c);
    //printf("\n");
    //Salaams M, you're 27 years old and you mobile number is 7006002019.
    printf("Salaams %c, you're %d years old and you mobile number is %li. \n",c,age,mobile);





}