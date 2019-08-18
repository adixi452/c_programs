#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int arr[5],i,val,flag=0;
  printf("Please enter the elements of array\n");
    for(i=0;i<=5;i++) //For entering the elements of array
       {
	 scanf("%d", &arr[i]);
       }
  printf("Your Array is :\n");
    for(i=0;i<=5;i++)  //For printing the elements of array
       {
	 printf("%d\t", arr[i]);
       }
  printf("\nPlease eneter a value to search in the array");
  scanf("%d", &val);
    for(i=0;i<=5;i++)
       {
	 if(arr[i]==val)
	   {
	     flag=1;
	     break;
	   }
       }
    if(flag==1)
	   {
	     printf("Your entered number is present in the array at index = %d",i);
	   }
    else
       {
	 printf("Your entered number is not present in the array");
       }

  getch();
}

