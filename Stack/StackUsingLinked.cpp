//stack using liked list with using stl linked list


#include<iostream>
#include<list>
using namespace std;

template<class T>
class Stack{
    list<T> ll;

public:
    void push(T val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }

    T top(){
        return ll.front();
    }

    bool isEmpty(){
        if(ll.size()==0){
            return true;
        }
        return false;
    }
};

int main(){
    Stack <int> s;
    s.push(3);
    s.push(2);
    s.push(1);

   
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}