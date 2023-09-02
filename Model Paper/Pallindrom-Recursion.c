#include<stdio.h>
#include<conio.h>
#include<string.h>


int Palindrom(char [] ,int ,int);

int main()
{
    char array[100];
    int length;

    printf("Enter your string : ");
    scanf("%s",array);

    printf("\n\nThe string you typed : %s",array);

    length = strlen(array);

    int result = Palindrom(array, 0, length - 1);

    printf("\n\n\nThe number of letters you need to type : %d",result);

    getch();
    return 0;
}

int Palindrom(char array[],int left,int right)
{
    int result;

    if(left >= right)
    {
        return 0;
    }

    if(array[left] == array[right])
    {
        return Palindrom(array, left + 1, right - 1);
    }
    else
    {
        int left_count = 1 + Palindrom(array, left + 1, right);
        int right_count = 1 + Palindrom(array, left, right - 1);

        if(left_count<right_count)
        {
            result = left_count;
        }
        else
        {
            result = right_count;
        }
        return result;
    }
}
