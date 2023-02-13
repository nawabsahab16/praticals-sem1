#include<stdio.h>
#include<conio.h>

int main()
    {
     int n;
     clrscr();
        
      printf("Enter a number : ");
      scanf("%d", &n);

      if(n%2 ==0)
      printf("\n %d is a even \n", n);

      else
      printf("\n %d is a odd \n", n);
      getch();
      return 0;



    }
