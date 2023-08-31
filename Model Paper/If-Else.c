#include<stdio.h>
#include<conio.h>

void main()
{
    int unit;
    float amount;
    char name[20];

    printf("Enter the name of the user : ");
    gets(name);
    printf("\nEnter the number of units consumed : ");
    scanf("%d",&unit);

    if(unit<=200)
    {
        amount = 100 + (unit*0.8);
    }
    else
        if(unit<=300)
        {
            amount = 100 + (200*0.8) + ((unit-200)*0.9);
        }
        else
        {
            amount = 100 + (200*0.8) + (100*0.9) + ((unit-300)*1);
        }

    if(amount>400)
    {
        amount = amount + amount*0.15;
    }

    printf("\n\n  Details of the user....\n");
    printf("\tName : %s\n",name);
    printf("\tUnits : %d\n",unit);
    printf("\tCharges : %0.2f",amount);

getch();
}

