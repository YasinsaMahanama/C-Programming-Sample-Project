#include<stdio.h>
#include<conio.h>

int sort(char []);

void main()
{
    char array[] = {6,5,2,7,4,1};

    int i;

    int result = sort(array);

    for(i=0;i<6;i++)
    {
        printf("%d\n",array[i]);
    }

getch();
;}


int sort(char array[])
{
    int i,j,temp;

    printf("Before sorting\n\n");


    for(i=0;i<6;i++)
    {
        printf("%d\n",array[i]);
    }


    printf("\n\nAfter sorting\n\n");


    for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    return array[i];
}
