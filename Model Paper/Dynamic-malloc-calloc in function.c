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

void addemployee(struct employee* ptr,int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\nEnter employee number : ");
        scanf("%d",&ptr->empno);
        printf("Enter employee name : ");
        scanf(" %[^\n]",ptr->name);
        printf("Enter employee gender[F/M] : ");
        scanf(" %c",&ptr->gender);
        printf("Enter employee salary : ");
        scanf("%f",&ptr->salary);
        ptr++;
    }
}

void printdetails(struct employee* ptr, int n){

    printf("\n\nDetails of the Employee......\n\n");


    for(int i=0;i<n;i++)
    {
        printf("\n\nEmployee number : %d",ptr->empno);
        printf("\nEmployee name : %s",ptr->name);
        printf("\nEmployee gender : %c",ptr->gender);
        printf("\nEmployee salary : %0.2f",ptr->salary);
        ptr++;
    }
}


/*void maddemployee(struct employee* ptr,int m)
{
    int i;

    for(i=0;i<m;i++)
    {
        printf("\nEnter employee number : ");
        scanf("%d",&ptr->empno);
        printf("Enter employee name : ");
        scanf(" %[^\n]",ptr->name);
        printf("Enter employee gender[F/M] : ");
        scanf(" %c",&ptr->gender);
        printf("Enter employee salary : ");
        scanf("%f",&ptr->salary);
        ptr++;
    }
}

void mprintdetails(struct employee* ptr, int m){

    printf("\n\nDetails of the Employee......\n\n");


    for(int i=0;i<m;i++)
    {
        printf("\n\nEmployee number : %d",ptr->empno);
        printf("\nEmployee name : %s",ptr->name);
        printf("\nEmployee gender : %c",ptr->gender);
        printf("\nEmployee salary : %0.2f",ptr->salary);
        ptr++;
    }
}*/

void main()
{
    int n,i,m,c;

    struct employee* ptr;

    printf("Enter number of employee : ");
    scanf("%d",&n);

    ptr = (struct employee*)malloc(n*sizeof(struct employee));

    addemployee(ptr,n);
    printdetails(ptr, n);


    printf("\n\nHow many employees add: ");
    scanf("%d",&m);

    c = n + m;

    ptr = (struct employee*)realloc(ptr,c*sizeof(struct employee));

    //maddemployee(ptr,m);
    //mprintdetails(ptr, m);

     for(i=n;i<c;i++)
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


    for(int i=0;i<c;i++)
    {
        printf("\n\nEmployee number : %d",ptr[i].empno);
        printf("\nEmployee name : %s",ptr[i].name);
        printf("\nEmployee gender : %c",ptr[i].gender);
        printf("\nEmployee salary : %0.2f",ptr[i].salary);
    }


    free(ptr);

getch();
}

