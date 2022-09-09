#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>

int main(){
   string str[] = {"fiza","biza","tiza","liza","baxu"};
   char search[100];
   char ch = '\0';
   int index = 0;
   int flag = 0;

    while(ch != '\n'){
        scanf("%c", &ch);
        char chup = tolower(ch);
        search[index]= chup;
        index++;

    }
    printf("entered name is %s", search);




   for(int i = 0 ; i < 5 ; i++){
      // printf("loop");
       if(strcmp(str[i],search)==0){
           flag = 1;
       }
   }
   if(flag == 1){
       printf("Name found!");
   }
   else{
       printf("404-Name not found! \n");
   }


    return 0;
}