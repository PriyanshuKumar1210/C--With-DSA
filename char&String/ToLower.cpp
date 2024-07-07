#include<iostream>
#include<cstring>
using namespace std;


void toLower(char word[],int n){
    for(int i=0;i<n;i++){
        char ch = word[i];
    
        if(ch>='a' && ch<='z'){
                continue;
        }

        else{
            word[i] = ch - 'A' + 'a';
        }
    }
    cout<<word<<endl;
}
int main(){
    char word[20];
    cin.getline(word,20); 
   
    
    /*getline is a function which is used to take input spaces from the user & print the 
                            chracter data type value after the spaces

              char word[20];
              cin>>word;        Priyanshu Kumar

                it only print the o/p: Priyanshu

                but by using this   char word[20];
                                    cin.getline(word,20); 

                we can print whole character data type      o/p : Priyanshu Kumar

                            
                            
                            */

    toLower(word,strlen(word));
}