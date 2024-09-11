#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

void findStock(int prices[],int n){

    int bestBuy[100000];
    bestBuy[0] = INT_MAX;

    cout<<"Best Buy "<<endl;
    for(int i=1;i<n;i++){
        bestBuy[i] = min(bestBuy[i-1],prices[i-1]);
        cout<<"  "<<bestBuy[i];
    }

    int maxProfit = 0;

    for(int i=1;i<n;i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit,currProfit);
    }
        cout<<"\n"<<maxProfit<<"\n";
}

int main(){
    int prices[6] = {7,1,10,3,6};
    int n = sizeof(prices)/sizeof(int);

    findStock(prices,n);
    return 0;
}