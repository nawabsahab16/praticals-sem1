#include<stdio.h>
#include<conio.h>

void main() {

    int year;
    clrscr();

    printf("\n Enter the year : ");
    scanf("%d", year);


    if(year%4==0){
        if(year%100==0){
            if(year%400==0)
            printf("%d is a leap year", year);
            else
            printf("%d is not a leap year ", year);


        }
        else
        printf("%d is a leap year", year);

    }
    else printf("%d is not a leap year", year);

    getch();
}