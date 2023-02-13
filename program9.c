#include<stdio.h>
#include<conio.h>

int main() {
    int i, fact=1, number;
    clrscr();

    printf("Enter then number: ");
    scanf("%d", &number);

    if(number==0)
     fact=1;
    else
    {
        for(int i=1; i<=number; i++)
            fact=fact*i;

    } 
    printf("Factorial of %d is: %d", number, fact);

    getch();
    return 0;
}