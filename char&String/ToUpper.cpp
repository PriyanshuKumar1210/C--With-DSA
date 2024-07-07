#include<iostream>
#include<cstring>
using namespace std;

void toUpper(char word[],int n){
    for(int i=0;i<n;i++){
        char str = word[i];
        if(str >= 'A' && str<= 'Z'){
                continue;
        }
        else{
            word[i] = str - 'a' + 'A';
        }
    }

    cout<<word<<endl;
}
int main(){
    char word[] = "abcde";
    cout<<word<<endl;
    toUpper(word,strlen(word));
}