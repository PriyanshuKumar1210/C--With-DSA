#include<iostream>
using namespace std;

void print(int ans[],int n){

    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
}

int main(){
    int arr[] = {3,2,4,5,6,2,7,2,2};
    int n=9,key=2,count=0;
    int ans[n];

    for(int i=0;i<n;i++){
       
        if(arr[i] == key ){
         
            // cout<<"Count before increament :"<<count<<endl;
            ans[count] = i;
            // cout<<"ans[count]: "<<ans[count]<<endl;
            // cout<<"\n"<<i<<endl;
        
            count++;
           // cout<<"Count after increament :"<<count<<endl;
           
        }
    }

   print(ans,count);

}