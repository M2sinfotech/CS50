#include<stdio.h>

int main(){
    int number;
    printf("Enter your number: \n");
    scanf("%d", &number);
    int divisor = 2;
    int flag = 0;

    for (divisor = 2; divisor<number; divisor++){
        if(number%divisor == 0){
            flag = 1;
        }
    }
    if (flag == 0){
    printf("The number is Prime \n");
    }
    else{
    printf("The number is not Prime \n");
    }
    return 0;
}