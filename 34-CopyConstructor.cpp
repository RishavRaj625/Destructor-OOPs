#include<iostream>
using namespace std;
class number{
    int a;
    public:
        number(){
            a=0;
        }
        number(int num){
            a=num;
        }
        // Making a copy constructor
        // When no copy constructor is found, complier supplies its own constructor
        number(number &obj){
            cout<<"Copy Constructor called!!!!"<<endl;
            a=obj.a;
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }

};
int main(){
    number x,y,z(25),z2; // x,z is used for default val
    x.display();
    y.display();
    z.display();
    // z1 should exactly resemble z or x,y
    number z1(x); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called/invoked
    z2.display();
    
    number z3 = z; // now Copy constructor is invoked(call) it gives the z value in z3 when display is write
    z3.display();
    return 0;
}