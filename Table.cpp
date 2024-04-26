#include<iostream>
using namespace std;

int main(){
    int input_number;
    cout<<"Enter the number \n";
    cin>>input_number;

    cout<<"Table of "<<input_number<<endl;
    for(int i=1;i<=10;i++)
    {
        int result = input_number*i;
        cout<<input_number<< "  *  "<<i<<" = "<<result<<endl;
    }
        
        
}

