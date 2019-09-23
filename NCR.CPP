#include<stdio.h>
#include<conio.h>
void main()
 {
   clrscr();
   int n,r;
   printf("Enter the value of n :\n");
   scanf("%d", &n);
   printf("Enter the value of r :\n");
   scanf("%d", &r);
   int factorial(int);
   int ncr(int,int);
   r = ncr(n,r);
   printf("%d",r);
   getch();
  }
int factorial(int n)
 {
   int fact = 1;
   for(int i=1;i<=n;i++)
     {
	 fact = fact * i;
     }
   return fact;
 }
int ncr(int n, int r)
 {
   int result;
   result=factorial(n)/(factorial(r)*factorial(n-r));
   return result;
 }

