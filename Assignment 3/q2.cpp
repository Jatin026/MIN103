#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Enter the value of two numbers :";
    cin>>a>>b;

    int x;
    cout<<"What type of Operation would like to perform on these numbers :"<<endl;
    cout<<"To add them : Enter 1"<<endl;
    cout<<"To subtract them : Enter 2"<<endl;
    cout<<"To multiply them : Enter 3"<<endl;
    cout<<"To divide them : Enter 4"<<endl;
    cin>>x;
    switch (x)
    {
    case 1:
        cout<<"Their addition is "<<a+b;
        break;
    case 2:
        cout<<"Their subtraction is "<<a-b;
        break;
    case 3:
        cout<<"Their multiplication is "<<a*b;
        break;
    case 4:
        if(b==0){
            cout<<"You can't perform this operation with b=0"<<endl;
        }
        else{cout<<"Their division is "<<a/b;}
        break;
    
    default:
        cout<<"Task Succesful"<<endl;
        break;
    }
    return 0;
}