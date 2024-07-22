#include<iostream>
using namespace std;

class BankAccount{
    private :
        long accountNumber;
        double balance;
    public :

        BankAccount(long accountNumber,double balance){
            this->accountNumber = accountNumber;
            this->balance = balance;
        }
        void deposit(double deposit){
            balance = balance + deposit;
        }

        double withdraw(double withdrawAmount){
            if(withdrawAmount>balance){
                cout<<"Enter valid amount to withdraw \n";
            }
            else{
                    balance = balance - withdrawAmount;
            }    
        }

        double getBalance(){
                cout<<"\n Balance : "<<this->balance<<endl;
        }
};

int main(){

    BankAccount user1(123456,5000);
    double withdrawAmount,deposit;
    cout<<"Enter the deposit amount "<<endl;
    cin>>deposit;
    cout<<"Enter the Withdraw amount "<<endl;
    cin>>withdrawAmount;
    

    user1.deposit(deposit);
    user1.withdraw(withdrawAmount);
    user1.getBalance();

    return 0;
}