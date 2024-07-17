#include<iostream>
using namespace std;

int fastExpo(int x,int i){

        int ans =1;

        while(i>0){
            int lastbit = i & 1;
            if(lastbit){
                ans = ans * x;
            }
            x=x*x;
            i = i>>1;
        }

        return ans;
}

int main(){
    int n=3,i=5;
    int res=fastExpo(n,i);
    cout<<res<<endl;
    return 0;
}