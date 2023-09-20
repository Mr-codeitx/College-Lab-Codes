// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    int arr1[10],arr2[10];
    printf("enter the number elements");
    for(int i = 0;i<6;i++){
        scanf("%d",&arr1[i]);
    }
    printf("\nenter the dta of 2nd array");
    for(int i =0;i<6;i++){
        scanf("%d",&arr2[i]);
    }
    int diff1[10];
    int k = 0;
    //logic to perform a-b
 
    for(int i = 0;i<6;i++){
           int condition = 0;
        for(int j = 0; j<6;j++){
            if(arr1[i] == arr2[j]) {
                condition = 1;
                break;
            }
        }
        if(condition==0){
            diff1[k] = arr1[i];
            k++;
        }  
    }
    
    int diff2[10];
    int l =0;
    
    for(int i = 0;i<6;i++){
        int condition = 0;
        for(int j = 0; j<6;j++){
            if(arr2[i] == arr1[j]) {
                condition = 1;
                break;
            }
        }
        if(condition==0){
            diff2[l] = arr2[i];
            l++;
        }  
    }
    
    // to perform nion of 2 sets
    int unio[12];
    for(int i = 0;i<k;i++){
        unio[i] = diff1[i];
    }
    int test = k-1;
    for(int i = 0;i<l;i++) {
        int condition = 0;
        for(int j = 0;j<k;j++){
            if(diff2[i] == unio[k]){
                condition = 1;
                break;
            }
        }
        if(condition == 0){
            test++;
            unio[test] = diff2[i];
        }
        
    }
    
    
    for(int i = 0;i<=test;i++){
        printf("\t %d",unio[i]);
    }
    
    
    
    return 0;
}