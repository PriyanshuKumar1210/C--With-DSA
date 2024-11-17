#include<iostream>
#include<vector>

using namespace std;

template<class T>

class Stack{
    vector <T> vec;
public:
    void push(T val){
        vec.push_back(val);
    }
    
    void pop(){
        vec.pop_back();
    }

    T top(){
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }

    bool isEmpty(){
        if(vec.size()==0){
            return true;
        }
        return false;
    }
};

int main(){
    Stack<int> st;
    st.push(3);
    st.push(2);
    st.push(1);

    while(!st.isEmpty()){
        cout<<st.top()<<" ";
        st.pop();
    }
        cout<<endl;

    return 0;
}