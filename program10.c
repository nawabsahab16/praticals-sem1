#include<stdio.h>
#include<conio.h>

int main() {
    int m1,m2,m3,m4,m5,m6,sum;
    float avg;
    clrscr();

    printf("Enter the marks of six subjects\n\n ");
    scanf("%d %d %d %d %d %d ", &m1 ,&m2, &m3, &m4, &m5, &m6);

    sum=m1+m2+m3+m4+m5+m6;
    printf("The sum of the marks is: %d\n", sum );
    avg= sum/6.0;

    printf("The average of marks =%.1f", avg);

    if(avg>100) printf("wrong data ");

    else if(avg>90){
        printf("You got distinction");
    }

    else if((avg<90)&&(avg>=80)){
        printf("You got A grade ");
    }
    else if((avg<80)&&(avg>=70)){
        printf("you got B grade ");
    }
    else if((avg<70)&&(avg>=60)){
        printf("You got C grade ");
    }

    getch();
    return 0;

}