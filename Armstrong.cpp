#include<iostream>
using namespace std;

int main(){
    int input_number;
    cout<<"Enter the number"<<endl;

    cin>>input_number;

    int temp = input_number;
    int rem,sum=0;
    while(input_number!=0){
        rem = input_number%10;
        sum = sum+rem*rem*rem;
        input_number/=10;
    }
    
    if(sum==temp){
        cout<<"Number is Armstrong : "<<endl;
    }

    else
        cout<<"Number is Not Armstrong : "<<endl;
}