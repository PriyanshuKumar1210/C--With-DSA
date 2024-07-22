#include<iostream>
using namespace std;

class Student{
    string name;
    float cgpa;

    public :
    //Setters
        void setDetails(string val_name,float val_cgpa){
            name = val_name;
            cgpa = val_cgpa;
        }
    //Getters
        string getDetails(){
            return name;
        }

        float getcgpa(){
            return cgpa;
        }
};

int main(){
    Student s1;
    s1.setDetails("abc",9.0);
    cout<<s1.getDetails()<<endl;
    cout<<s1.getcgpa()<<endl;
    return 0;
}