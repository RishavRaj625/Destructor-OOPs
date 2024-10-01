#include<iostream>
using namespace std;
class deposits{
    int principal;
    int years;
    float rate;
    float returnvalue;

    public:
        deposits(){}
        deposits(int p,int y,float r); // r can be a value like 0.04
        deposits(int p,int y,int r); // r can be a value like 4(% in percantage)--> if we 4/100=0.04

        void display();
};
deposits :: deposits(int p,int y,float r){
    principal=p;
    years=y;
    rate=r;

    returnvalue = principal;
    for(int i=0;i<y;i++){
        returnvalue = returnvalue*(1+r);
    }
}
deposits :: deposits(int p,int y,int r){
    principal=p;
    years=y;
    rate=float(r)/100;

    returnvalue = principal;
    for(int i=0;i<y;i++){
        returnvalue = returnvalue*(1+rate);
    }
}
void deposits::display(){
    cout<<endl<<"Principal amount was "<<principal
    << ". Return value after "<<years
    <<" years is "<<returnvalue<<endl;
}
int main(){
    deposits b1,b2,b3;
    int p,y;
    float r;
    int R;


    cout<<"Enter the value of p y and r :- "<<endl;
    cin>>p>>y>>r;
    // if you not intialize before it is just like int a = 9
    // deposits b1 = deposits(p,y,r); 

    b1 = deposits(p,y,r); // b1 is intialize 
    b1.display();

    cout<<"Enter the value of p y and R :- "<<endl;
    cin>>p>>y>>R;
    b2 = deposits(p,y,R);
    b2.display();

    // b3.display(); //it gives the garbage value
    return 0;
}