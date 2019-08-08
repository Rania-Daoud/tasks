#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int stringtoint(char* string)
{
    int length=strlen(string);
    int n=0;
    for(int i=0;i<length;i++)
    {
        n=n*10+string[i]-'0';
    }

    return n;
}

int main(int argc,char* argv[])
{
   int first,second;
   int n=0;
   if(argc<2)
   {
       printf("hello, please enter command and try again");
       return 0;
   }

   if(argc<4)
       {
           printf("command %s should have at least two numbers, but you entered: %d \n",argv[1],argc-2);
           printf ("please enter first number: ");
           scanf("%d",&first);
           printf("\n please enter second number: ");
           scanf("%d",&second);
           n=1;


       }

   int temp=strlen(argv[1]);
   for(int i=0;i<temp;i++)
   {
       argv[1][i]=tolower(argv[1][i]);
   }

   if(strcmp(argv[1],"add") ==0)
   {
       if(n)
       {
           printf("%d",first+second);
           return 0;
       }

       int result=0;
       for(int i=2;i<argc;i++)
       {
           result+=stringtoint(argv[i]);
       }

       printf("%d",result);


   }

   else if(strcmp(argv[1],"mul") ==0)
   {
       if(n)
       {
           printf("%d",first*second);
           return 0;
       }

       int result=1;
       for(int i=2;i<argc;i++)
       {
           result*=stringtoint(argv[i]);
       }

       printf("%d",result);


   }

   else
   {
       printf("unavailable command, available commands are : [Add,mul]");
   }
}
