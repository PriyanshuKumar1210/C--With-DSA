#include<iostream>
#include<cstring>
using namespace std;

bool palindrome(char word[],int n){
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

    bool res = palindrome(word,strlen(word));
    if(res==0)
        cout<<"Not a palindrome Number "<<endl;
    else
        cout<<"Palindrome number "<<endl;
    return 0;
}