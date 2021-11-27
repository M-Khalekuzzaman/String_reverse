#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char str1[20],str2[20];
    cout<<"The original string is : ";
    cin>>str1;
    int i = 0,len = 0,j;
    while(str1[i] !='\0')
    {
        i++;
        len++;
    }
    for(j = 0,i = len-1; i>=0,j<len ; i--,j++)
    {
        str2[j] = str1[i];
    }
    cout<<"Reverse string is : "<<str2<<endl;
    getch();
}
