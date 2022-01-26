#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b;
    cout<<"Enter the real part of complex number :";
    cin>>a;
    cout<<"Enter the imaginary part of complex number :";
    cin>>b;
    float modulus;
    modulus=pow((a*a+b*b),0.5);
    cout<<"The modulus of the complex number is : "<<modulus<<endl;
    float argument;
    argument=atan(abs(b/a));
    if(a>=0&&b>=0){
        cout<<"The argument is :"<<argument;
    }
    else if(a>0&&b<0){
        cout<<"The argument is :"<<-argument;
    }
    else if(a<0&&b>0){
        float z=acos(-1)-argument;
        cout<<"The argument is :"<<z;
    }
    else{
        float k=-acos(-1)+argument;
        cout<<"The argument is :"<<k; 
    }
    return 0;
}