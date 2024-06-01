#include<stdio.h>
int main(){
    int id,unit,total,net_amount;
    float charge,subch;
    char name[15];

    printf("please enter id : ");
    scanf("%d",&id);

     printf("please enter unit : ");
    scanf("%d",&unit);


     printf("please enter name : ");
    scanf("%s",&name);

    if(unit==350){
        charge=1.20;
    }
    else if( unit > 350 && unit < 600){
        charge=1.50;
    }
    else if(unit >600 && unit < 800){
        charge=1.80;
    }
    else if(unit >800  ){
        charge = 2.00;
    }
    else{

    }
    total=unit*charge;
    subch=total*18/100;
    net_amount=total+subch;

     if(net_amount<=256){
        net_amount=256;
     }
     printf("id is : %d\n",id);
     printf("name is : %s \n",name);
     printf("unit is : %d \n",unit);
     printf("total is : %d \n",total);
     printf("sub charge is : %f\n ",subch);
     printf("net amount is : %d \n",net_amount);





}