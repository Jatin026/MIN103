#include<iostream>
#include<iomanip>
#define PI 3.14
#define volume(r,h) (PI*r*r*h) 
using namespace std;

int main(){
    float r,h ;
    cout<<"Enter the value  of r and h :";
    cin>>r>>h;
    float v=volume(r,h);
    cout<<"The volume with PI 3.14 is : "<<v<<endl;
    #undef PI
    #define PI 3.14159
    v=volume(r,h);
    cout<<"The volume with PI 3.14159 is : "<<v<<endl;
    return 0;
}