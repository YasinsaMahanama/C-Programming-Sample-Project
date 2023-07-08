#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

int concat(int a,int b)
{

    char S1[50];
    char S2[50];
    char S3[50];

    sprintf(S1,"%d",a);
    sprintf(S2,"%d",b);
    sprintf(S3,"%d",a);

    strcat(S1,S2);
    strcat(S2,S3);

    if(atoi(S1)>atoi(S2))
    {
        return atoi(S1);
    }
    else
    {
        return atoi(S2);
    }
}

void main()
{

    //Declare the variable

    int a,n,m,i;

    //Gets the user input

    printf("\nEnter the number of integers : ");
    scanf("%d",&a);

    printf("\n\nEnter the value of %d integers : \n",a);
    scanf("%d",&n);

    for(i=1;i<a;i++)
    {
        scanf("%d",&m);
        n = concat(n,m);
    }

    //Print the answer

    printf("\n\nThe largest contact number is : %d",n);

getch();
}
