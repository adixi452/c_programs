#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int arr[5],i,j,key;
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
printf("\n------------------------------------------------------------------------\n");
  for(j=1;j<=5;j++) //Performing the insertion sort
     {
       key=arr[j];
       i=j-1;
       while(i>=0 && arr[i]>key)
	    {
	     arr[i+1]=arr[i];
	     i=i-1;
	     }
      arr[i+1]=key;
     }
   printf("Your Sorted Array is :\n"); //Printing the sorted array
    for(i=0;i<=5;i++)
       {
	 printf("%d\t", arr[i]);
       }

getch();
}
