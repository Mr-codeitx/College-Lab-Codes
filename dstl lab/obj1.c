#include <stdio.h>

int main(){
    int n,m;
    printf("enter the number of elements of 1st and 2nd Set");
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    int c[n+m];
    printf("enter the elements of set a");
    for (int  i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the elements of set B");
    for (int  j = 0; j <m; j++)
    {
        scanf("%d",&b[j]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<m+n;k++){
                if(a[i]!=b[j]){
                  c[k]=a[i];
                  }
                  break;
            }
            }
        }

    for(int i=0;i<m+n;i++){
        printf("%d \n",c[i]);
    }
}