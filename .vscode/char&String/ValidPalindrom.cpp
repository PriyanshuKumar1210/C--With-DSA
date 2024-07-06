#include<iostream>
#include<cstring>
using namespace std;

bool palindrom(char word[],int n){
    int start=0,end=n-1;

    while(start<end){
        if(word[start] != word[end]){
            return false;
        }
        start++;
        end--;
    }
        return true;
}
int main(){
    char word[20];
    cin.getline(word,30);

    bool res = palindrom(word,strlen(word));
    cout<<"Palindrome or not "<<res<<endl;
    return 0;
}