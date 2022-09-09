#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])
{

    char c1='h', c2='i', c3='!';

    printf("%c%c%c\n",c1,c2,c3);

    string s="Assalamu'alaikum!\n";

    printf("%s\n",s);

    int count=strlen(s);

    printf("%d\n",count);

    char c4= toupper(c2);
    printf("%c\n",c4);

    int i=0;
    while(s[i]!='\0')
    {
        c4=toupper(s[i]);
        printf("%c",c4);
        i++;
    }

    for(i=0;i<count;)
    {
        c4=toupper(s[i]);
        printf("%c",c4);
        i++;
    }


    for(i=0;i<100;)
    {
        c4=toupper(s[i]);
        printf("%c",c4);
        i++;
    }




}
