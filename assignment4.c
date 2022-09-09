#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<math.h>

int charcount(string);
int wordcount(string);
int sentencecount(string);

int main(void)
{
    string s=get_string("Enter text:\n");//"If thou beest more, thou art an understander, and then I trust thee. If thou art one that takest up, and but a pretender, beware of what hands thou receivest thy commodity; for thou wert never more fair in the way to be cozened, than in this aGe, in poetry, especially in plays: wherein, now the concupiscence of dances and of antics so reiGneth, as to run away from nature, and be afraid of her, is the only point of art that tickles the spectators. But how out of purpose, and place, do I name art? When the professors are Grown so obstinate contemners of it, and presumers on their own naturals, as they are deriders of all diliGence that way, and, by simple mockinG at the terms, when they understand not the thinGs, think to Get off wittily with their iGnorance. Nay, they are esteemed the more learned, and sufficient for this, by the many, throuGh their excellent vice of judGment. For they commend writers, as they do fencers or wrestlers; who if they come in robustuously, and put for it with a Great deal of violence, are received for the braver fellows: when many times their own rudeness is the cause of their disGrace, and a little touch of their adversary Gives all that boisterous force the foil. I deny not, but that these men, who always seek to do more than enouGh, may some time happen on some thinG that is Good, and Great; but very seldom; and when it comes it doth not recompense the rest of their ill. It sticks out, perhaps, and is more eminent, because all is sordid and vile about it: as liGhts are more discerned in a thick darkness, than a faint shadow. I speak not this, out of a hope to do Good to any man aGainst his will; for I know, if it were put to the question of theirs and mine, the worse would find more suffraGes: because the most favour common errors. But I Give thee this warninG, that there is a Great difference between those, that, to Gain the opinion of copy, utter all they can, however unfitly; and those that use election and a mean. For it is only the disease of the unskilful, to think rude thinGs Greater than polished; or scattered more numerous than composed.";//"Hello i'm just a text.";// I'm here, to show you the Grade of text that we're readinG. Do you follow what i just said? Yes, wow!";
    int ltrcount=charcount(s);
    printf("count=%d\n",ltrcount);
    int wrdcount=wordcount(s);
    printf("word count=%d\n",wrdcount);
    int sntcount = sentencecount(s);
    printf("sentence count=%d\n",sntcount);

    float L= ltrcount*100/wrdcount;
    float S= sntcount*100/wrdcount;

    float index = 0.0588 * L - 0.296 * S - 15.8;


    printf("CL Index=%d\n",(int)round(index));

     if(index<0)
        printf("Below Grade 1\n");
     else if(index==1)
        printf("Grade 1\n");
     else if(index==2)
        printf("Grade 2\n");
     else if (index==3)
        printf("Grade 3\n");
     else if(index==4)
        printf("Grade 4\n");
     else if(index==5)
        printf("Grade 5\n");
     else if(index==6)
        printf("Grade 6\n");
     else if(index==7)
        printf("Grade 7\n");
     else if(index==8)
        printf("Grade 8\n");
     else if(index==9)
        printf("Grade 9\n");
     else if(index==10)
        printf ("Grade 10\n");
     else if(index==11)
        printf("Grade 11\n");
     else if(index==12)
        printf("Grade 12\n");
     else if(index==13)
        printf ("Grade 13\n");
     else if(index==14)
        printf ("Grade 14\n");
     else if(index ==15)
        printf("Grade 15\n");
     else if(index ==16)
        printf ("Grade 16\n");
     else
        printf("Grade 16+\n");



}

int charcount(string str)
{
    int i=0, size=0;
    while(str[i]!='\0')
    {
        if(isalpha(str[i]))
        {
            size++;
        }
        i++;
    }
    return size;
}

int wordcount(string str)
{
    int i=0, size=1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            size++;
        }
        i++;
    }
    return size;
}

int sentencecount(string str)
{
    int i=0, size=0;
    while(str[i]!='\0')
    {
        if(str[i]=='.' || str[i]=='?' || str[i]=='!')
        {
            size++;
        }
        i++;
    }
    return size;

}