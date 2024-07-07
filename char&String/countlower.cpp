#include<iostream>
#include<cstring>
using namespace std;

void countLower(string str){
         
        int count = 0;
        for(int i=0;i<str.length();i++){
            if(str[i]>='a' && str[i]<='z'){
                count++;
            }
        }

        cout<<" Lower-casecount digit are in the sentenece is : "<<count<<endl;
}

int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    countLower(str);
    return 0;
}