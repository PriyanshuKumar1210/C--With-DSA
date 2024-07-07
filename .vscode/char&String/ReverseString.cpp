#include<iostream>
#include<cstring>
using namespace std;

void reverse(char word[],int n){

    int start =0,end = n-1;

    while(start<end){
        swap(word[start],word[end]);
        start++;
        end--;
    }
    cout<<word<<endl;
}

int main(){

    char word[10];
    cin.getline(word,10);
    // getline(cin,word,10); // It only works in char array , not in string  

    reverse(word,strlen(word));
    return 0;

}