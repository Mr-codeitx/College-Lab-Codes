#include<stdio.h>

void main()
{
   int a[10],b[10],i,c[10],j,k=0,n1,n2;

 
   printf("Enter the size(<=10)of 1st set:\n");
   scanf("%d",&n1);
   printf("Enter the elements of 1st set:\n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

 

   printf("Enter the size(<=10)of 2nd set:\n");
   scanf("%d",&n2);
   printf("Enter the elements in 2nd Set:\n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

 
   for(i=0;i<n1;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) 
       {
          c[k]=a[i];
          k++;
       }
    }
    
   for(i=0;i<n2;i++)
   {
     
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k)
     {
       c[k]=b[i];
       k++;
     }
   }   printf("Union is\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
}
