 #include<stdio.h>
 #include<conio.h>
 int i,j,index_min,temp,n;
 void main()
     {
       clrscr();
       int arr[9];
       void input_array(int [], int);
       void output_array(int [], int);
       void sel_sort(int [], int);
       printf("Enter the size of the array :\t");
       scanf("%d", &n);
       input_array(arr,n);
       sel_sort(arr,n);
       output_array(arr,n);
       getch();
     }
 /*To read the elements of an array*/
 void input_array(int arr[],int n)
    {
     printf("\nPlease enter the elements of array\n");
     for(i=0;i<n;i++)
     {
     scanf("%d", &arr[i]);
     }
    }

 /*To sort the elements of array*/
  void sel_sort(int arr[],int n)
     {
      for(i=0;i < n;i++)
	{
	   index_min = i  ;
	   for(j=i+1;j < n;j++)
	      {
		if (arr[index_min] > arr[j])
		    {
		    index_min = j;
		    }
	       }
	   if(index_min != i)
	     {
	     temp=arr[i];
	     arr[i]=arr[index_min];
	     arr[index_min]=temp;

	      }
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