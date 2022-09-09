#include<stdio.h>
#include<cs50.h>

struct contacts{
    string name;
    long number;
}Contact;

int main(void)
{
        struct contacts *contact=NULL;
        contact=&Contact;
        contact->name=get_string("Enter Contact Name:\n");
        contact->number=get_long("Enter number:\n");


        printf("%s : %li\n",contact->name,contact->number);

        char alpha='a';
        char *ptr=&alpha;

        for(int i=0;i<26;i++)
        {

            printf("%c\n",*ptr);
            *ptr+=1;
        }






}