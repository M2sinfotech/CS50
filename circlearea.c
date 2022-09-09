#include<stdio.h>
#include<cs50.h>

float square(float);
#define pi 3.1417
int main(void)
{
    //float pi;
    float radius;
    float area;
    //pi=get_float("enter value of pi:\n");
    radius=get_float("enter radius of circle:\n");
    area=pi*square(radius);
    printf("Area of Circle is: %f\n",area);

}

float square(float n)
{
    n=n*n;
    return n;
}