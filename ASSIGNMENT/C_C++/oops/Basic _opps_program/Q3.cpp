#include<iostream>
using namespace std;
class bank{
    private:
    //data member
    string depositor_name,Ac_type;
    int account_no,balance;

    public:
    //member of function
    void assign_values(string name,int accno,string actype,int bal){
        depositor_name=name;
        account_no=accno;
        Ac_type=actype;
        balance=bal;

    }
    void deposit(int amount){
        balance += amount;
        cout<<"amount deposit succsesfuly...!\n";
    }
    void withdraw(int amount){
        if(balance >= amount){
            balance -= amount;
            cout<<"withdraw succsessfuly...!\n";
        }
        else{
            cout<<"withdraw failed..!";
        }
    }
        void display(){
            cout<<"Dipositor Name : "<<depositor_name<<endl;
            cout<<"Balance : "<<balance;
        }
    

};
int main(){
    bank obj;
    obj.assign_values("Dipak",100128,"Saving Acount",30000);
    obj.deposit(20000);
    obj.withdraw(30000);
    obj.display();
    return 0;
}
