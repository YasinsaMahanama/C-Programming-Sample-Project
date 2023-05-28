#include<stdio.h>
#include<conio.h>
void main()
{
 int stamp;//stamp value//
 int stamp_25= 10, stamp_15=10, stamp_10= 10;
 int price;//coin value//
 int repeat;//continue//
 int balance;//customer balance//
 int coin_50=10, coin_25=10,coin_10=10, coin_5=10;

 do{
   printf("-----------------------------------------------------\n\n");
   printf("\t\tHELLO!\n\tWELCOME TO COME HERE BUY STAMP.....!!\n*...WE WILL ASSIST YOU TO BUY THE STAMP YOU NEED...*\n-----------------------------------------------------\n\n");
   printf("----------------------------------------------------------------\n\n");
   /*printf("\n\nAvailable stamps are:\n\t\t stamp_25=%d\n\t\t stamp_15=%d\n\t\t stamp_10=%d\n",stamp_25,stamp_15,stamp_10);
   printf("Available Coins are:\n\t\t coin_50=%d\n\t\t coin_25=%d\n\t\t coin_10=%d\n\t\t coin_5=%d\n\n\n",coin_50,coin_25,coin_10,coin_5);
   printf("-------------------------------------------------------------------\n\n");*/
   printf("Machines Available Stamps Are:\n\t\t 1.Rs:25\n\t\t 2.Rs:15\n\t\t 3.Rs:10\nHow much value of stamp do you want?\n\t\t *");
   scanf("%d",&stamp);
   if(stamp==25||stamp==15||stamp==10){
    if(stamp_25>0||stamp_15>0||stamp_10>0){
     printf("-----------------------------------------------------\n\n");
     printf("Machines Available Coins Are:\n\t\t 1.Rs:50\n\t\t 2.Rs:25\n\t\t 3.Rs.10\n\t\t 4.Rs.5\nHow much value of coin you pay?\n\t\t *");
     scanf("%d",&price);
     printf("-----------------------------------------------------\n\n");
     if(price==50||price==25||price==10||price==5){
      switch(stamp)
      {
      case 25:
        if(stamp_25>0){
           if(price>=stamp){
            switch(price)
            {
            case 50:
                balance=price-stamp;
                printf("your change = %d\n",balance);
                if(coin_25>0){
                    printf("you can get your change is one 25 coin.\n");
                    coin_25=--coin_25;
                    coin_50=++coin_50;
                    stamp_25=--stamp_25;
                }
                else
                    printf("No coins available\n");
                break;
            case 25:
                balance=price-stamp;
                printf("your change = %d\n",balance);
                printf("your balance is 0\n");
                coin_25=++coin_25;
                stamp_25=--stamp_25;
                break;
            }
           }
           else
             printf("Insufficient amount tendered,Please try again.Here your coin...\n");
        }
        else
            printf("No stamp available,Please try again.Here your coin...\n");
        break;

      case 15:
        if(stamp_15>0){
           if(price>=stamp){
            switch(price)
            {
            case 50:
                balance=price-stamp;
                printf("your change = %d\n",balance);
                if(coin_25>0&&coin_10>0){
                  printf("you can get your change is one 25 coin and one 10 coin\n");
                  coin_25=--coin_25;
                  coin_10=--coin_10;
                  coin_50=++coin_50;
                  stamp_15=--stamp_15;
                }
                else
                    printf("No coins available\n");
                break;
            case 25:
                balance=price-stamp;
                printf("your change = %d\n",balance);
                if(coin_10>0){
                  printf("you can get your change is one 10 coin\n");
                  coin_10=--coin_10;
                  coin_25=++coin_25;
                  stamp_15=--stamp_15;
                }
                else
                    printf("No coins available\n");
                break;
            }
           }
           else
             printf("Insufficient amount tendered,Please try again.Here your coin...\n");
        }
        else
            printf("No stamp available,Please try again.Here your coin...\n");
        break;

      case 10:
        if(stamp_10>0){
           if(price>=stamp){
            switch(price)
            {
            case 50:
                balance=price-stamp;
                printf("your change = %d\n",balance);
                if(coin_25>0&&coin_10>0&&coin_5>0){
                  printf("you can get your change is one 25 coin, one 10 coin and one 5 coin\n");
                  coin_25=--coin_25;
                  coin_10=--coin_10;
                  coin_5=--coin_5;
                  coin_50=++coin_50;
                  stamp_10=--stamp_10;
                }
                else
                    printf("No coins available\n");
                break;
            case 25:
                balance=price-stamp;
                printf("your change = %d\n",balance);
                if(coin_10>0&&coin_5>0){
                  printf("you can get your change is one 10 coin and one 5 coin\n");
                  coin_10=--coin_10;
                  coin_5=--coin_5;
                  coin_25=++coin_25;
                  stamp_10=--stamp_10;
                }
                else
                    printf("No coins available\n");
                break;
            case 10:
                balance=price-stamp;
                printf("your change = %d\n",balance);
                printf("your balance is 0\n");
                coin_10=++coin_10;
                stamp_10=--stamp_10;
                break;
            }
           }
           else
             printf("Insufficient amount tendered,Please try again.Here your coin...\n");
        }
        else
            printf("No stamp available,Please try again.Here your coin...\n");
        break;
      }
     }
     else
      printf("You entered wrong coin,You can enter 50,25,10,5 coins,Please try again.Here your %d coin...\n",price);
    }
   }
   else
    printf("\n...No Stamp Available...You Can buy 25, 15, 10 stamps...Please Try Again ...\n");
    printf("----------------------------------------------------------------\n\n");
    printf("\n\nAvailable stamps are:\n\t\t stamp_25=%d\n\t\t stamp_15=%d\n\t\t stamp_10=%d\n",stamp_25,stamp_15,stamp_10);
    printf("Available Coins are:\n\t\t coin_50=%d\n\t\t coin_25=%d\n\t\t coin_10=%d\n\t\t coin_5=%d\n\n\n",coin_50,coin_25,coin_10,coin_5);
  printf("-------------------------------------------------------------------\n\n");
  printf("Are you want to transaction again?\n If yes enter - 1 \n    No enter  - 0\n\t\t  *");
  scanf("%d",&repeat);
  printf("-----------------------------------------------------\n\n");
  printf("\t...THANK YOU TRANSACTION WITH US...\n");
  printf("-----------------------------------------------------\n\n");
 }while(repeat);
getch();
}
