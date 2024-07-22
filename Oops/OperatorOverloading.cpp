// Addition to the complex number

#include<iostream>
using namespace std;

class Complex{

    int real,img;
public:
    Complex(){

    }
    Complex(int real,int img){
        this->real = real;
        this->img = img;
    }

    void show(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    void operator +(Complex &c2){
        int resreal = this->real + c2.real; //working as -> resreal = c1.real + c2.real 
        int resimg = this->img + c2.img;   //working as -> resimg = c1.img + c2.img
        Complex c3(resreal,resimg);
        c3.show();
    }
};
int main(){
    Complex c1(2,4);
    Complex c2(4,2);
    c1.show();
    c2.show();
    c1+c2;
    return 0;
}