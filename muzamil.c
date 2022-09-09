#include<stdio.h>
#include<math.h>

long int get_power(int,int);



int main()
{
    int base,power;
    long int final;
    printf("enter the base:\n");
    scanf("%d",&base);

    printf("enter the power:\n");
    scanf("%d",&power);
    get_power( base, power);
    //final=power(base,power);
    // printf("%li",final);

    return 0;

}

long int get_power(int base, int power)
{
    long int value;
    value = pow(base,power);
    printf("%li",value);
    return 0;
    //return value;
}