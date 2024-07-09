#include<iostream>
using namespace std;

void func(){
    int size;
    cout<<"Enter the size : ";
    cin>>size;

    int *ptr = new int[size];   // Creating a dynamic array

    int x=0;
    for(int i=0;i<size;i++){
        ptr[i]=x;
        cout<<ptr[i]<<" ";
        x++;
    }

    delete []ptr;
}

int main(){
    func();
    return 0;
}