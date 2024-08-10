#include<iostream>
#include<string>
using namespace std;

//finding the factorial for finding the combination
long fact(int n)
{
      if(n==0)
      return 1;
    long res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
// finding the nCr
long findCombination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

long countSubstring(string str,char ch,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(ch == str[i]){
               count++;
        }
    }
    // cout<<"count"<<count<<endl;
    long ans = findCombination(count,2);
    return ans+count; 
    /* count is add because ans can't count the single char substring like:- 'a' */
}

int main(){
    string str = "ababa";
    char ch = 'b';
    int n = str.size();
    cout<<"Answer : "<<countSubstring(str,ch,n)<<endl;
    return 0;
}