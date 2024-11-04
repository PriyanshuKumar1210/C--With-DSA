/* Time complexity O(n)
    Space complxity O(n) */

#include<iostream>
#include<stack>
#include<string>

using namespace std;

string reverseString(string str){
    stack<char> s;
    string ans;

    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        char top = s.top();
        ans += top;
        s.pop();
    }
        return ans;
}

int main(){

    string str = "abcd";
    cout<<"Reverse String : "<<reverseString(str);
    cout<<endl;
    return 0;
    
}