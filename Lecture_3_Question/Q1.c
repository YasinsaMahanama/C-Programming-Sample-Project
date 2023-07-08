//Write a C program to reverse a given string without using any additional arrays or strings?

#include<stdio.h>
#include<conio.h>

int main()
{
    char array[100],ch;
    int i,len;

    printf("Enter the string : ");
    gets(array);

    len=strlen(array);

    for(i=len-1;i>=0;i--)
    {
        printf("%c",array[i]);
    }


getch();
return 0;
}
