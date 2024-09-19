#include<iostream>
using namespace std;

void findPermutation(string str,string ans){
    int n = str.size();
    if(n==0){
        cout<<ans<<"\n";
        return;
    }
    
    for(int i=0;i<n;i++){
        char ch = str[i];

        /*abcdefgh => we want the o/p abdefgh
                then we perform the str.substr(0,i) + str.substr(i+1,n-i-1)operation where
                str.substr(0,i) return abor str.substr(i+1,n-i-1) defgh
                so we get the outpur defgh
        
        */
        string nextStr = str.substr(0,i) + str.substr(i+1,n-i-1);
        findPermutation(nextStr,ans+ch);
    }
}

int main(){
    string str = "abc";
    string ans = "";
    findPermutation(str,ans);
    return 0;
}