#include<stdio.h>

int main() {
    int number;
    clrscr();

    printf("Enter any number: ");
    scanf("%d", &number);


    if(number>0)
    printf("\n The number is positive ");

    else if(number < 0)
    printf("\n The number is negative ");


    else
    printf("\n The number is zero");


    getch();

    return 0;
    
}