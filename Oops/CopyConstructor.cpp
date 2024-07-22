#include<iostream>
using namespace std;
class Car{
public:
    string name,color;
    Car(string name , string color){
        this->name = name;
        this->color = color; 
    }
    Car(Car &original){
        name = original.name;
        color = original.color;
    }
};
int main(){
    Car c1("Priyanshu","Red");
    Car c2(c1);
    cout<<c1.name<<endl;
    cout<<"c2 : "<<c2.name<<endl;
}