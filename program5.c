#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    float p,r,t,si,ci;
    clrscr();

    printf("Enter principal amount (p): ");
    scanf("%f", &p);
    printf("Enter time in a year(t):");
    scanf("%f", &t);
    printf("Enter rate in percent(r):");
    scanf("%f", &r);

    /* Calculating simple interest */

    si=(p*t*r)/100.0;

    /*  Calculating compund interest */

    ci= p* (pow(1+r/100, t)-1);


    printf("Simple interest = %0.3f\n", si);

    printf("Compund interest= %0.3f", ci);


    getch();
     return 0;

     //


}