#include<stdio.h>
int main()
{
    char name1[20],name2[20];
    printf("Enter main string is : ");
    gets(name1);
   int i = 0,len = 0,j;
   while(name1[i] !='\0')
   {
       i++;
       len++;
   }
   for(j = 0 ,i = len-1 ; i>=0,j<len ; i--,j++)
   {
       name2[j] = name1[i];
   }

   printf("reverse string is : %s\n",name2);

    getch();
}

