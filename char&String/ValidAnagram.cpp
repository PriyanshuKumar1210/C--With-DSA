#include<iostream>
#include<cstring>
using namespace std;

bool anagram(string str1,string str2){
   // cout<<'a';
    if(str1.length() != str2.length()){
        cout<<"Not a valid anagram "<<endl;
        return false;
    }

    int count[26] = {0}; 
    for(int i=0;i<str1.length();i++){
        int idx = str1[i] - 'a';
        count[idx]++;
    }
    for(int i=0;i<str2.length();i++){
         int idx = str2[i] - 'a';

         if(count[idx]==0){
            cout<<"Not a valid anagram "<<endl;
            return false;
         }
         count[idx]--;
    }
    cout<<" a valid anagram "<<endl;
    return true;
}

int main(){

    string str1,str2;
    cout<<"Enter the first string : ";
    getline(cin,str1);
    cout<<"Enter the second string : ";
    getline(cin,str1);
    anagram(str1,str2);
    return 0;

}