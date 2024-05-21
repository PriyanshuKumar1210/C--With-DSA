#include<iostream>
#include<limits.h>
using namespace std;

void maxProfit(int *prices,int n){
    int bestBuy[100000];    // best buying possible value it range is not larger than it 
    bestBuy[0] = INT_MAX;   // Initialize the bestBuy[0] to +ve infinity 
                             //   because of we can't buy stocks at more than it price

    cout<<" Prices of Stocks : ";
    for(int i=0;i<n;i++){
        cout<<prices[i]<<",";
    }
    cout<<"\n Best Buying Price : ";

    for(int i=1;i<n;i++){
        bestBuy[i] = min(prices[i-1],bestBuy[i-1]);
        cout<<bestBuy[i]<<","; 
    }

    cout<<"\n Current Profit : ";
    int maxProfit = INT_MIN;
    for(int i=0;i<n;i++){
        int currProfit = prices[i]-bestBuy[i];
        cout<<currProfit<<",";
        maxProfit = max(maxProfit,currProfit);
    }
    
        cout<<"\n Maximum Profit : "<<maxProfit<<endl;
}

int main(){
    int prices[] = {7,5,6,2,6};
    int n = sizeof(prices)/sizeof(int);
    maxProfit(prices,n);
}