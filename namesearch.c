#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

bool compare(string,string);

int main(void)
{
    string names[6]={"fiza","biza","tiza","liza","baxu","Mansoor Ahmad Sheikh"};
    string search=get_string("Enter name to search:\n");

    //char names[5]={'a','e','i','o','u'};
    //char search=get_char("Enter a vowel:\n");
    //search="fiza";
    int index,flag=0;


    for(int i=0;i<6;i++)
    {

        //strcmp(search,names[i])==0
        if(compare(search,names[i]))
        {
            flag=1;
            index=i;
            //printf("found!\n");

        }

    }

    if(flag==1)
        printf("Found (%s) at index : %d\n",search,index);
    else
        printf("404-Not Found\n");


}

bool compare(string s1, string s2)
{
    int flag=0;
    //compare size
    if(strlen(s1)==strlen(s2))
    {
        int size=strlen(s1);
        for(int i=0;i<size;i++)
        {
            if(toupper(s1[i])!=toupper(s2[i]))
            {
                flag=1;
                break;
            }

        }
    }
    else
    {
        return false;
    }

    if(flag==0)
    {
        return true;
    }
    else
        return false;

}

//search=   FIZA,fiza,FiZa
//names[i]= FIZA
//found