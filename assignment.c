#include<stdio.h>
#include<cs50.h>
//prototypes
int totalmarks(int,int,int,int,int);
float percentage(int, int);
char getgrade(float);


int main(void)
{
    int eng, maths,sc,sst,urdu;
    int obtainedmrks;
    float mrkprct;
    char grade;
    printf("Enter marks for following subjects out of 50:\n");
    printf("English:\n");
    scanf("%d",&eng);
    maths=get_int("Maths:\n");
    sc=get_int("Science:\n");
    sst=get_int("S.St:\n");
    urdu=get_int("Urdu:\n");
    obtainedmrks=totalmarks(eng,maths,sc,sst,urdu);
    mrkprct=percentage(obtainedmrks,250);
    grade=getgrade(mrkprct);
    printf("JKBOSE\n");
    printf("Name: Muzammil\n");
    printf("Roll No: 911\n");
    printf("Class: 8th\n");
    printf("Subject                Obtained Marks             Max. Marks\n");
    printf("English                %d                         50\n",eng);
    printf("Maths                  %d                         50\n",maths);
    printf("Science                %d                         50\n",sc);
    printf("S St                   %d                         50\n",sst);
    printf("Urdu                   %d                         50\n",urdu);
    printf("______________________________________________________________________\n");
    printf("Total Marks            %d         out of          250\n",obtainedmrks);
    printf("______________________________________________________________________\n");
    printf("Percentage             %f %%      \n",mrkprct);
    printf("______________________________________________________________________\n");
    printf("Grade:                 %c      \n",grade);















}
//function definitions
int totalmarks(int eng, int maths, int sc, int sst, int urdu)
{
    int sum=eng+maths+sc+sst+urdu;
    return sum;

}

float percentage(int obtmrks, int maxmrks)
{
    float percent=obtmrks*100/maxmrks;
    return percent;
}

char getgrade(float percentage)
{
    if(percentage>=90)
    {
        return 'A';
    }
    else if(percentage>=80 && percentage<90)
    {
        return 'B';
    }
    else if(percentage>=70 && percentage<80)
    {
        return 'C';
    }
else if(percentage>=60 && percentage<70)
{
     return 'D';
}
else
{
    return 'F';
}

}