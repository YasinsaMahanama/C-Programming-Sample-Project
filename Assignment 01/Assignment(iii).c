#include<stdio.h>
#include<string.h>
#include<conio.h>

int Banknotes()
{

    //Declare the variable

    int A,B,N,S;
    int x;

    //Gets the user input

    printf("\nEnter the value of banknotes : \n");
    printf("\tA : ");
    scanf("%d",&A);
    printf("\tB : ");
    scanf("%d",&B);
    printf("\n\nEnter the value of amount you want to pay : ");
    scanf("%d",&S);
    printf("\n\nEnter the amount of banknotes do you want to pay : ");
    scanf("%d",&N);

    //calculate the number of banknotes

    /*N = x + y;
    y = N - x;
    S = (A*x) + (B*y);
    S = (A*x) + (B*(N - x));
    S = (A*x) + (B*N) - (B*x);*/
    x = (S - (B*N))/(A-B);

    return (x);

}


void main()
{

    //Passing parameters

    int z = Banknotes();

    //Check the solution

    if(z<0)
    {
        //Print the result

        printf("\n\n-1");
    }
    else
    {
        //Print the result

        printf("\n\nNumber of A banknotes for pay amount : %d",z);

    }

getch();
}
