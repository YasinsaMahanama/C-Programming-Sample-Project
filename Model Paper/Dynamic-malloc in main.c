#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct employee
{
    int empno;
    char name[20];
    float salary;
    char gender;
};

//struct employee e[3];

void main()
{
    int n,i;

    struct employee *ptr;

    printf("Enter number of employee : ");
    scanf("%d",&n);

    ptr = (struct employee*)malloc(n*sizeof(struct employee));

    for(i=0;i<n;i++)
    {
        printf("\nEnter employee number : ");
        scanf("%d",&ptr[i].empno);
        printf("Enter employee name : ");
        scanf(" %[^\n]",ptr[i].name);
        printf("Enter employee gender[F/M] : ");
        scanf(" %c",&ptr[i].gender);
        printf("Enter employee salary : ");
        scanf("%f",&ptr[i].salary);
    }

     printf("\n\nDetails of the Employee......\n\n");


    for(i=0;i<n;i++)
    {
        printf("\n\nEmployee number : %d",ptr[i].empno);
        printf("\nEmployee name : %s",ptr[i].name);
        printf("\nEmployee gender : %c",ptr[i].gender);
        printf("\nEmployee salary : %0.2f",ptr[i].salary);
    }

getch();
}
