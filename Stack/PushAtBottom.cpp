
/* It enters the input at the bottom of stack while we called the pushAtBottom method/function
    Time complexity is O(n)
*/

#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s,int val){

    if(s.empty()){      // it enters the value when stack is empty
        s.push(val);    
        return;
    }

    int temp = s.top();     // it stores the the top value of stack and after that we delte them to enter the new value 
                        // at stack bottom
    s.pop();
    pushAtBottom(s,val);

    s.push(temp);       //it stores the temp value as stack using backtracking

}

int main(){
    
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    pushAtBottom(s,4);
    while(!s.empty()){
        cout<<s.top() <<" ";
        s.pop();
    }
        cout<<endl;
        return 0;
}