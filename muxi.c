#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main()
{

   string name[5]={"fiza","biza","tiza","liza","baxu"};
   string search = get_string("enter any name\n");
   int index,flag=0;

   for(int i=0;i<5;i++)
   {
       if(strcmp(name[i],search)==0)
       {
           flag=1;
           index=i;
       }
   }

    if(flag==1)
        printf("Found (%s) at index %d\n",search,index);
    else
        printf("404 - Not found");

}