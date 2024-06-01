//Accepting numbers from the user and checking if they are even or odd
#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
    printf("please enter valure array : ",i+1);
    scanf("%d",&arr[i]);
    }
    //check odd even
    for(int i=0;i<5;i++){
        if(arr[i] % 2 == 0){
            printf("even value :%d\n ",arr[i]);
        }
        else{
            printf("odd value : %d\n",arr[i]);
        }
    }


}








