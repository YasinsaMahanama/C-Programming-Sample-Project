#include<stdio.h>
#include<string.h>
#include<conio.h>

int Palindrome(char array[100])
{

//Declare the variable

    int i,j;
    int left_count=0;
    int right_count=0;
    int result;

//Check the number of characters required for the left side

    for(i=0,j=strlen(array)-1;i<j;)
    {
        if(array[i]==array[j])
           {
               i++;
               j--;
           }
        else
        {
            j--;
            left_count++;
        }
    }

//Check the number of characters required for the right side

    for(i=strlen(array)-1,j=0;i>j;)
    {
        if(array[j]==array[i])
           {
               i--;
               j++;
           }
        else
        {
            j++;
            right_count++;
        }
    }

//Check the min number of characters required for the left side or right side

    if(left_count>right_count)
    {
        result=right_count;
    }
    else
    {
        result=left_count;
    }

    return result;

}


void main()
{

    char array[100];

    //Get the user input

    printf(".......................................................\n");
    printf("\n\n              **Enter your string : ");
    scanf("%s",array);
    printf("\n\n.......................................................\n");

    //Print the user input

    printf("\n\n            **The string you typed : %s",array);
    printf("\n\n\n.......................................................\n");

    //Passing parameters

    int result=Palindrome(array);

    //Print the answer

    printf("\n\n       **The number of letters you need to type : %d",result);
    printf("\n\n\n.......................................................");

getch();
}
