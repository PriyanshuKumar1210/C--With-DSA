/*Enter cost of 3items from the user(usingfloatdatatype)-a pencil,a pen and an eraser.
You have to output the total cost of the items back to the user as the ir bill.(Addon:You can also try adding 18% GST tax to the items in the bill as an advanced problem)*/

#include<iostream>
using namespace std;

int main(){
    float pen,pencil,eraser;

    cout<<"Enter the price of pen , pencil & eraser :";
    cin>>pen>>pencil>>eraser;

    float cost = pen+pencil+eraser;
    float gst = (cost*18)/100;
    float total_cost = cost+gst;

    cout<<"Cost of Product : "<<cost;
    cout<<"Gst Amount : "<<gst;
    cout<<"Total Amount : "<<total_cost;
}