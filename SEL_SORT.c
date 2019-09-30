 #include<stdio.h>
 #include<conio.h>
 int i,j,key,temp;
 void main()
     {
       clrscr();
       int arr[9];
       void input_array(int [], int);
       void output_array(int [], int);
       void sel_sort(int [], int);
       printf("Please enter a value between 0 and 9\n");
       scanf("%d", &j);
       input_array(arr,j);
       output_array(arr,j);
       sel_sort(arr,j);
       getch();
     }
 /*To read the elements of an array*/
 void input_array(int arr[],int n)
    {
     printf("Please enter the elements of array\n");
     for(i=0;i<n;i++)
     {
     scanf("%d", &arr[i]);
     }
    }
 /*To print the elements of array*/
 void output_array(int arr[],int n)
   {
    printf("\nYour array is: \n");
    for(i=0;i<n;i++)
       {
	printf("%d\t", arr[i]);
       }
    }
 /*To sort the elements of array*/
  void sel_sort(int arr[],int n)
     {
      for(i=0;i<n-1;i++)
	{
	   key= i  ;
	   for(j=1;j<n;j++)
	      {
		if (arr[key]>arr[j])
		   {
		     key=j;
		   }
	      }
	   if(key!=i)
	     {
	     temp=arr[i];
	     arr[i]=arr[key];
	     arr[key]=temp;
	     }
	}
      printf("\nSorted array is:\n");
      for(i=0;i<n;i++)
      {
	printf("%d\t", arr[i]);
      }
   }