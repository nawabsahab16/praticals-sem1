#include<stdio.h>
#include<conio.h>

void main() {
    float celsius, fahrenheit;
    clrscr();

    printf("Enter the temperture in celsius: %f", celsius);
    scanf("%f" , &celsius);

    fahrenheit= (1.8 * celsius)+ 32;

    printf("Enter the temperature in Fahrenheit: %f", &fahrenheit);
    getch();
}