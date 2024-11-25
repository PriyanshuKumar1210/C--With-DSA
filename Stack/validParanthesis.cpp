#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isValid(string str){

    stack<char> s;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='('||ch=='{'||ch=='['){  //opening brackets
            s.push(ch);
        }
        else{   //closing condition
            int top=s.top();    //store the top element of the stack
// check the string is valid or not
            if(top == '(' && ch==')' ||
                top == '{' && ch == '}' ||
                top == '[' && ch == ']'
                )
               {
                s.pop();
               }
               else{
                    return false;
               }  
        }
    }

       return s.empty();   /* this is similial to this loc
                                if(s.empty())
                                    return true
                                else    
                                    return false*/
        
}

int main(){

    string str1 = "([}])";  //inavlid returns 0
    string str2 = "([{}])"; //invalid return 1
    bool res = isValid(str2);
    cout<<res<<endl;
    return 0;
}

/* time Complexity O(n)
    space complexity O(n)*/