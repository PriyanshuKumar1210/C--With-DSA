// implementation of stack using dynamic array

#include <iostream>
using namespace std;

class stack
{
public:

    int size;
    int *ptr = new int[size];

    void input()
    {

        cout << "Enter the size of an array : ";
        cin >> size;
        int num;


        cout<<"Enter the elements : \n";

        for(int i=0;i<size;i++){
            cin>>num;
            ptr[i] = num;
        }

    }

    void print(){
        cout<<"size in print "<<size;
        cout<<"Elements are :";
        // for(int i=0;i<size;i++){
        //     cout<<ptr[i]<<" ";
        // }
        cout<<ptr[9]<<endl;
        cout<<endl;

        delete []ptr;
    }
    
};

int main()
{
    stack s;
    s.input();
    s.print();

    return 0;
}