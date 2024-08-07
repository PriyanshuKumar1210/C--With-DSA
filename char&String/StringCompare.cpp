/*
    You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two
    indices in a string(not necessarily different) and swap the characters at the se indices.Return true if
    it is possible to make both strings equal by performing at most one strings swap on exactly one of the strings.
    Otherwise,return false.

    Example:    Input:  s1="bank",
                        s2="kanb"
                Output:
                true Explanation:
                For example,swap the first character with the last character of s2 to make "bank".


*/

#include <iostream>
using namespace std;

// bool stringSwap(string s1,string s2){

//     if(s1.length()!=s2.length()){
//         return false;
//     }
//     int idx=0;
//     int end=s1.length()-idx;
//     // for(int i=0;i<s1.length();i++){

//     // }

//         swap(s1[idx],s1[end]);
//         cout<<s1<<endl;
//         cout<<s1<<endl;
//         return true;
// }

bool areAlmostEqual(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    char diffChar1, diffChar2;
    int diff = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            if (!diff)
            {
                cout<<"s1"<<s1[i]<<endl;
                cout<<"s2"<<s2[i]<<endl;
                cout<<"diff"<<diff;
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            }
            else
            {
                if (s1[i] != diffChar2 || s2[i] != diffChar1)
                {
                    return false;
                }
               
            }
            diff++;
        }
        if (diff > 2)
        {
            return false;
        }
    }
    if (diff == 1)
    {
        return false;
    }
    return true;
}
    int main()
    {
        string s1 = "bank";
        string s2 = "kanb";
        bool res = areAlmostEqual(s1, s2);
        cout<<res<<endl;
        return 0;
    }