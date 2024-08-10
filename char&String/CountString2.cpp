#include<iostream>
using namespace std;

long countSubstring(string str,char ch,int n){
    long substring=0,count=0;
    for(int i=0;i<n;i++){
        if(str[i]==ch){
            substring+=(count+1);
            count++;
        }
    }
        return substring;
}

int main(){
    string str = "ababa";
    char ch = 'b';
    int n = str.size();
    cout<<"Answer : "<<countSubstring(str,ch,n)<<endl;
    return 0;
}