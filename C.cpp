#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
  int n,i,p,j,c;
  //Heading
  printf("Welcome to Auto Services Agency\n");
  printf("*******************************\n");
  //User Input
  printf("Enter the number of passengers:");
  scanf("%d", &n);
  printf("\n");
    int arr[n];
    int a[n];
    int d[n];
    printf("Enter the details  of the passengers:\n");
    printf("-------------------------------------\n\n");
	 for (i = 0; i < n; i++) 
	 {
     arr[i]=i+1; //Process ID is automatically assigned
     printf("The arrival time of passenger %d is:",i+1);
     scanf("%d", &a[i]);
     printf("The distance to be travelled by passenger %d is:",i+1);
     scanf("%d", &d[i]);
     printf("\n");
     }
     //Sorting on the basis of distance to be travelled
      for (i = 0; i < n; ++i) 
      {
        for (j = i + 1; j < n; ++j)
        {
            if (d[i] > d[j]) 
           {
                c =  d[i];
                d[i] = d[j];
                d[j] = c;
                c =  d[i];
                a[i] = a[j];
                a[j] = c;
                c =  arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
	  }
	   system("cls");
	   //Arranging the data into tables
	   printf("Passengers\t Arrival time\t Distance (in KM)\n");
         for (i = 0; i < n; ++i)//Printing sorted list
         {
    	   printf("P%d\t\t %d\t\t %d\t", arr[i],a[i],d[i]);
    	   printf("\n");
	     }
	return 0;
}
