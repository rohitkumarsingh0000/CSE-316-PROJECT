#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,p,j,c;
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
    for (i = 0; i < n; ++i) //Sorting based on arrival time
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j]) 
           {
                c =  a[i];
                a[i] = a[j];
                a[j] = c;
                c =  d[i];
                d[i] = d[j];
                d[j] = c;
                c =  arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
	}
	printf("Passengers\t Arrival time\t Distance (in KM)\n");
    for (i = 0; i < n; ++i)//Printing sorted list
    {
    	printf("P%d\t\t %d\t\t %d\t", arr[i],a[i],d[i]);
    	printf("\n");
	}
	return 0;
}
