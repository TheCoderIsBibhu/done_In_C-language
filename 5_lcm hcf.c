#include<stdio.h>
#include<conio.h>
void main() 
{
    int a, b, c, rem, gcd, lcm;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\nPress 1: To calculate GCD\nPress 2: To calculate LCM\n");
    scanf("%d",&c);
    if(b < a)
    {
        tmp=b;
        b=a;
        a=b;
    }
    while(1)
    {
        rem=b % a;
        if(rem == 0)
            gcd=a;
        b=a;
        a=rem;        
    }
    switch(c)
    {
        case 1: printf("HCF = %d\n",gcd);
        break;
        case 2: lcm=a*b/gcd;
                printf("LCM = %d\n",lcm);
        break;
    } 
    getch();
}
