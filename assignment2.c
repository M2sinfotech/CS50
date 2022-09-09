#include<stdio.h>
#include<cs50.h>
//prototypes
//int totalmarks(int,int,int,int,int);
//float percentage(int, int);
//char getgrade(float);


int main(void)
{
    int marks[5];
    int i, sum=0,avg=0,percentage=0;
    char grade;
    // marks[0]=40;//eng
    // marks[1]=50;//maths
    // marks[2]=30;//science
    // marks[3]=36;//sst
    // marks[4]=44;//urdu
    //marks[5]=50; //gives an error because maximum size of array is 5.
    printf("Enter marks for 5 subjects out of 50:\n");
    printf("Consider the Serial be like EN, MT, SC, SST, UR\n");
    for(i=0;i<5;i++)
    {
        marks[i]=get_int(":");
    }
    // for(i=0;i<5;i++)
    // {
    //   printf("Enter marks: \n");
    //   scanf("%d",&marks[i]);
    // }
    for(i=0;i<5;i++)
    {
        printf("Subject             %d          out of               50\n",marks[i]);

    }
    for(i=0;i<5;i++)
    {
       sum=sum+marks[i];
    }
        printf("_______________________________________________________\n");
        printf("Total Marks            %d         out of           250\n",sum);

        avg=sum/5;
        printf("_______________________________________________________\n");
        printf("Average Marks          %d         out of           50\n",avg);

        percentage=sum*100/250;
        printf("_______________________________________________________\n");
        printf("Percentage          %d\n",percentage);

        if(percentage>=90)
            grade='A';
        else if(percentage>=80 && percentage<90)
            grade='B';
        else if(percentage>=70 && percentage<80)
            grade='C';
        else if(percentage>=60 && percentage<70)
            grade='D';
        else
            grade='F';

        printf("_______________________________________________________\n");
        printf("Grade              %c\n",grade);




}
