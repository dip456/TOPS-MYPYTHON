#include <stdio.h>    
     
int main()    
{    
    // array     
    int arr[] = {50, 12, 88, 17, 1};     
    int temp = 0;    
        
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
        
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }    
    return 0;    
} 