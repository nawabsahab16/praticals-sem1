#include<stdio.h>
main() 
{
    int a,b,c,big;
    printf("\n Enter three numbers:");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c)
    big=a;
    else if(b>a && b>c)
    big=b;
    else
    big=c;
    
    printf("Enter the largest number = %d", big);
    return 0;

}