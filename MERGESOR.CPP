#include<stdio.h>
#include<conio.h>

void input_array(int arr[], int n)
{
 printf("Enter the elements of array :\n");
 for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
}
void merging(int arr[], int p, int q, int r)
{
 int i,j,k,n1,n2,L[100],R[100];
  n1 = q-p+1;
  n2 = r-q;

   for(i=0; i < n1; i++)
    {
     L[i] = arr[p+i];
    }
   for(j=0;j<n2;j++)
    {
     R[j]= arr[q+j+1] ;
    }

  i=0,j=0,k=p;
 while(i<n1 && j<n2)
   {
     if(L[i]<R[j])
      {
       arr[k]=L[i];
       i++;
      }
     else
     {
      arr[k]=R[j];
      j++;
     }
      k++;
   }
	while(i<n1)
	{
	 arr[k]=L[i] ;
	 i++;
	 k++;
	}
	while(j<n2)
	{
	 arr[k]=R[j];
	 j++;
	 k++;

	}
}
void mergesort(int arr[], int p, int r)
{
  if(p<r)
   {
     int q= (p+r)/2;
     mergesort(arr,p,q);
     mergesort(arr,q+1,r);
     merging(arr, p,q,r);

   }
}
void output_array(int arr[], int n)
 {
   int i;
   printf("The output array is:\n");
   for(i=0;i<n;i++)
   {
    printf("%d\t", arr[i]);
   }
 }
 void main()
{
 clrscr();
 int n,arr[100],i,p,r;
 printf("Enter the size of array :\n");
 scanf("%d", &n);
 input_array(arr, n);
 mergesort(arr,0,n-1);
 output_array(arr, n);
 getch();
}
