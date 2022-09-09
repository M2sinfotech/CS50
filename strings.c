#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //declaration
    string name[5];
    int i;

    //initialization
    name[0]="Irtiza";
    name[1]="Fiza";
    name[2]="Amtun Noor";
    name[3]="Umm-e-lubaab";
    name[4]="Sheikh Mansoor";


    //traversal
    printf("%s\n", name[0]);
    printf("%s\n", name[1]);
    printf("%s\n", name[2]);
    printf("%s\n", name[3]);
    printf("%s\n", name[4]);

    for(i=0;i<5;i++)
        name[i]=get_string("Enter Name: \n");

    for(i=0;i<5;i++)
        printf("%s \n",name[i]);

    char choice=get_char("Do you need to edit any value? Y or N\n");
    if(choice=='Y')
    {
        int index=get_int("At what index? \n");
        string newvalue=get_string("Enter new value: \n");
        printf("Updated list is:\n");
        name[index]=newvalue;
        for(i=0;i<5;i++)
            printf("%s \n",name[i]);
    }

    else
    {
        printf("Okay! we good to go!");
    }







}