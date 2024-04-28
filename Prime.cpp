#include<iostream>
using namespace std;

int main(){
    int input_number;
    cout<<"Enter the number"<<endl;
    cin>>input_number;
    bool res=true;
    if(input_number<=1)
        res = false;

    if(input_number%2==0 || input_number%3==0)
        res = false;

    if(input_number == 2 || input_number==3)
        res = true;

    for(int i=5;i*i<input_number;i=i+6){
        if(input_number%i==0 || input_number % (i+2)==0)
            res = false;
    res = true;    
    }
    
    if(res==false)
         cout<<"Not a Prime number"<<endl;
    else
        cout<<"Prime Number"<<endl;
}