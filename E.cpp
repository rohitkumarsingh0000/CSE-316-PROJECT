#include<stdio.h>
#include<windows.h>
#include<conio.h>
  int main()
  {
	   int i,j,n,c,sum=1;
	   float wtag=0,tag=0,tt=0,wt=0;
	   int arr[50],a[50],d[50],w[50],t[50],ct[50];
          printf("\tWelcome to Auto Services Agency\n");
          printf("\t*******************************\n");
          printf("\tEnter the number of passengers:");
          scanf("%d", &n);
          printf("\n");
          printf("Enter the details  of the passengers:\n");
          printf("-------------------------------------\n\n");
	 
	 
	 for (i = 0; i < n; i++) 
	 {
          printf("The distance to be travelled by passenger %d is:",i+1);
          scanf("%d", &d[i]);
          printf("The arrival time of passenger %d is:",i+1);
          scanf("%d", &a[i]);
          arr[i]=i;
          printf("\n");
     }
     
       for(i=0;i<n;i++)
       {
          for(j=0;j<n;j++)
          {
            if(a[i]<a[j])
             {
              c=arr[j];
              arr[j]=arr[i];
              arr[i]=c;
              c=a[j];
              a[j]=a[i];
              a[i]=c;
              c=d[j];
              d[j]=d[i];
              d[i]=c;
             }
          }
        }


 
    for(j=1;j<n;j++)
      {
	     for(i=1;i<n;i++)
        {
         if (d[i]>=a[i]  && d[i]>d[j])
         {
          c=arr[j];
          arr[j]=arr[i];
          arr[i]=c;
          c=a[j];
          a[j]=a[i];
          a[i]=c;
          c=d[j];
          d[j]=d[i];
          d[i]=c;
         }
        }
      }
    w[0]=0;
  for(i=0;i<n;i++)
  {
   sum=sum+d[i];
   t[i]=sum-a[i];
   w[i]=t[i]-d[i];
   ct[i]=t[i]+a[i];
   tt=tt+t[i];
   wt=wt+w[i];
  }

       tag=(tt/n);
       wtag=(wt/n);
   
      system("cls");
      
	   
	  printf("\nPessangers\t Distance\t Arrival\t Waiting\t Turn-around\t Completion " );
      
     for(i=0;i<n;i++)
    {
	int xyz;
	if(w[i]<0)
	xyz=0;
	else
	xyz=w[i];
    printf("\n |p%d\t\t %d\t\t %d\t\t %d\t\t\t%d\t\t%d|",arr[i],d[i],a[i],xyz,t[i],ct[i]);
    }
 
      printf("\n\nAverage Distance Travelled: %f",wtag);
      printf("\nAverage Turn Around time : %f",tag);
      printf("\nProfit of the Agency:%d",n*10);
        
		return 0;
  }
