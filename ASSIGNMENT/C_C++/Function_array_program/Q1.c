//1. Write a program to find out the max number from given array using function 
#include <stdio.h>    
     int maximum(int arr[],int size){
        int max=arr[0];

        for(int i=1;i<size;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
     };
     int main(){
        int arr[]={50,80,5,900,10};
        int size = sizeof(arr)/sizeof(arr[0]);

        int maximum1 = maximum(arr,size);
        printf("maximum value is : %d ",maximum1);
        return 0;
     }