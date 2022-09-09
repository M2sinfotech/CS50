#include<stdio.h>
#include<cs50.h>

struct contact{
    string name;
    long number;
};

int main(void)
{
    struct contact contacts[4];
    for(int i=0;i<4;i++)
    {
        contacts[i].name=get_string("Enter Contact Name:\n");
        contacts[i].number=get_long("Enter number:\n");
    }

    for(int i=0;i<4;i++)
    {
        printf("%s : %li\n",contacts[i].name,contacts[i].number);
    }

    


}