#include<iostream>
using namespace std;
int main(){
    int choice;
    float balance=10000;
    float amount;
    
    do{
        cout<<" ======ATM MENU======"<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"------------------------"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Your current balance Rs. "<<balance<<endl;
                break;
            
            case 2:
                cout<<"Enter amount to deposit: "<<endl;
                cin>>amount;
                balance=balance+amount;
                cout<<"Deposit successfully....."<<endl;
                cout<<"Updated Balance: Rs. " <<balance<<endl;
                break;

            case 3:
                cout<<"Enter amount to withdraw: ";
                cin>>amount;

                if(amount<=balance){
                    balance=balance-amount;
                    cout<<"Withdraw succesfully....."<<endl;
                    cout<<"Remaining Balance: Rs. "<< balance<< endl;
                }
                else{
                    cout<<"Insufficient balance....."<<endl;
                }
                break;

            case 4:
                cout<<"Thank you for using the ATM.....";
                break;

            default:
                cout<<"Invalid choice! Please try again."<< endl;    
        }
    }while(choice!= 4);

    return 0;
}