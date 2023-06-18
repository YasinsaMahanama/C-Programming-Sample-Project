#include<stdio.h>
#include<conio.h>
#define N 50
void main()
{
  int row,column,elements,A[N][N],X[N],Y[N],i,j,k,sum;

  printf("How many rows do you want to read for table A?\n");
  scanf("%d",&row);
  printf("How many columns do you want to read for table A?\n");
  scanf("%d",&column);

  if(row<0 || column<0)
    printf("\n-------You entered wrong values for row or column--------");
  else
  printf("How many elements do you want to read for list X?\n");
  scanf("%d",&elements);

  printf("\n-----------------------------------------------------\n");

      if(elements==column){
        printf("\nEnter Value of rows and columns for table A:\n");
         for(i=0;i<row;++i){
          for(j=0;j<column;++j){
            scanf("%d",&A[i][j]);
         }
        }
       printf("\nThe table is:\n");
            for(i=0;i<row;i++){
                    for(j=0;j<column;j++){
                         printf("%d\t",A[i][j]);
                    }
                    printf("\n");
            }
        printf("\n----------------------------------------------------\n");
            printf("\nEnter values of list X:\n");
            for(i=0;i<elements;i++){
                    scanf("%d",&X[i]);
            }
            printf("\nThe list is:\n");
            for(i=0;i<elements;i++){
                    printf("%d\n",X[i]);
            }

        printf("\n-----------------------------------------------------\n");

            for(i=0;i<row;i++){
                for(j=0;j<elements;j++){
                    sum=0;
                    for(k=0;k<elements;k++){
                       sum=sum+(A[i][k]*X[k]);
                       Y[i]=sum;
                    }
                }
            }
            printf("\nThe answer:\n");
             for (i=0;i<row;i++)
            {
                printf("%d\n",Y[i]);
            }
         printf("\n...Operation Successful....\n");
         }
         else
            printf("\n....Sorry please enter equal values of column of table and elements of list....");

    getch();
    }

