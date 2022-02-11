#include<bits/stdc++.h>
using namespace std;
struct Student{
    int regno, total, marks[5];
    string s;
    int calculate(){
        int sum=0;
        for (int i = 0; i < 5; i++)
        {
            sum+=marks[i];
        }
        return sum;
    }
    void havedata(){
        cin>>s>>regno;
        for (int i = 0; i < 5; i++)
        {
            cin>>marks[i];
        }
        total=calculate();
    }
    void dispdata(){
        cout<<"Name   : "<<s<<"\nReg no "<<regno<<"\nTotal   "<<total<<"\n";
        for (int i = 0; i <5; i++)
        {
            cout<<marks[i]<<"  ";
        }
    }
};
int main(){
    Student s;
    s.havedata();
    s.dispdata();
    return 0;
}