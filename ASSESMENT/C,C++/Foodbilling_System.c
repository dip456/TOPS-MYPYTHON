#include<stdio.h>
struct Item
{
    char name[50];
    int price;
};
int main(){
    struct Item Menu[] = {
         {"Pizza", 180},
        {"Burger", 100},
        {"Dosa", 120},
        {"Idli", 50}
    };
    int menusize = sizeof(Menu)/sizeof(Menu[0]);
    int total = 0;

        printf("------This is the available menu------\n\n");
        for (int i = 0; i < menusize; i++) {
        printf("%d : %s\t\tPrice = %drs/pcs\n", i + 1, Menu[i].name, Menu[i].price);
    }
    printf("0 : Exit\n\n");
    while (1)
    {
        int choice,quantity;
        printf("please enter item number 1 to 4. & 0 num is exit :  ",menusize);
        scanf("%d",&choice);

        switch (choice)
        {
        case 0:
            printf("Thank you..! your Total Bill is : \n",total);
            return 0;
            

            case 1:
            case 2:
            case 3:
            case 4:
            printf("quantity of Item : ");
            scanf("%d",&quantity);

            total += Menu[choice - 1].price * quantity;
            printf("you select %s (quantity is %d) your total :%d \n",Menu[choice - 1].name, quantity, total);
            break;

        
        default:
        printf("please select only 1 to 4 ...!");
            break;
        }
        char again;
        printf("select more items ? (y/n): ");
        scanf(" %c", &again);

        if (again != 'y' && again != 'Y') {
            printf("Thank you. Your total bill is: %drs\n", total);
            break;
        }

}
return 0;
    }

