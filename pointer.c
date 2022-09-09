#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n=10;
    int *p=&n;
    printf("%d\n",n);
    printf("%p\n",p);
    printf("%d\n",*p);

    string s="irti";
    printf("%c\n",s[0]);
    printf("%c\n",s[1]);
    printf("%c\n",s[2]);
    printf("%c\n",s[3]);

    printf("______________________\n");

    char *c="irti";
    printf("%p\n",c);
    printf("%p\n",&c[0]);
    printf("%p\n",&c[1]);
    printf("%p\n",&c[2]);
    printf("%p\n",&c[3]);

    printf("%c\n",*c);
    printf("%c\n",*(c+1));
    printf("%c\n",*(c+2));
    printf("%c\n",*(c+3));
    printf("%c",*(c+4));
    for(int i=0;i<=4;i++)
    {
        printf("%c",*(c+i));
    }

    printf("%s",c);


}
