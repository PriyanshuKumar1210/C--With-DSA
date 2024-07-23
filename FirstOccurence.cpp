#include<iostream>
#include<vector>
using namespace std;

int firstOccur(vector <int> vec,int i){
    int n = vec.size();
    int target = 31;
    

    if(i==n-1){     //Base Case
        return -1;
    }

    if(vec[i] == target ){
        return i;
    }

    return firstOccur(vec,i+1);
}

int main(){
    vector <int> vec = {1,2,3,3,3,4,5};
    int i=0;
    cout<<firstOccur(vec,i)<<endl;
    return 0;
}