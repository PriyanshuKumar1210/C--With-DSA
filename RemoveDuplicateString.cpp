#include<iostream>
#include<string>
using namespace std;

void removeDuplicates(string str,string ans,int i,int map[26]){
    
        /* map is here basically boolean type data types */
        if(i==str.size()){
            cout<<"Answer : "<<ans<<endl;
            return;
        }

        int mapIdx = int(str[i] - 'a');  
        if(map[mapIdx]){
            //Duplicate 
            removeDuplicates(str,ans,i+1,map);
        }
        else{
            //Not Duplicate
            map[mapIdx] = true;
            removeDuplicates(str,ans+str[i],i+1,map);
        }
}

int main(){

    string str = "aabjjaacb";
    string ans = "";
    int map[26] = {false};
    removeDuplicates(str,ans,0,map);
    return 0;

}