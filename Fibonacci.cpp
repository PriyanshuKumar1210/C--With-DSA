#include<iostream>
using namespace std;

int main(){
    int first_term=0,second_term=1,next=0;
    int n,count=0;
    cout<<"Enter the number to print less than of it in Fibonacci Series"<<endl;
    cin>>n;
    cout<<first_term<<"  ";
    cout<<second_term<<"  ";
    while(next<n-2){
        next = first_term+second_term;
        first_term = second_term;
        second_term = next;
        // count++;
        cout<<next<<"  ";
        
    }
        cout<<"\n";
}