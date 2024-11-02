#include<iostream>
#include<vector>
using namespace std;


class stack{
    vector <int> vec;
public:
    void push(int val){
        vec.push_back(val);
    }

    void pop(){
        vec.pop_back();
    }

    int top(){
        // cout<<"vec.top : "<<vec.top();
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
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}