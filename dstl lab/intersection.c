
#include<stdio.h>
int main()
{
    int n,m;
    
    printf("Enter no. of element of set A\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of set A\n");
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    
printf("Enter no. of element of set B\n");
scanf("%d",&m);
int b[m];
printf("Enter elements of set B\n");
    for(int i=0;i<m;i++)
      scanf("%d",&b[i]);
    int k=0;
    int c[m+n];
for(int i=0;i<m;i++){
         for(int j=0;j<m;j++){ 
          if(a[i]==b[j])
            {c[k]=a[i];
              k++;}
         }
         }
printf("intersection of set A and set B is:-\n");
    for(int i=0;i<k;i++){
      printf("%d ",c[i]);
      }
    
return 0; 
}