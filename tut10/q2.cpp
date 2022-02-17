#include<bits/stdc++.h>
using namespace std;
class Complex{
    int real,img;
    public:
        void getvalue(){
            cin>>real>>img;
        }
        void display(){
            cout<<real<<"  "<<img<<"i"<<"\n";
        }
        Complex operator++ (){
            img+=1;
            real+=1;
        }
        Complex operator-- (){
            img-=1;
            real-=1;
        }
};
int main(){
    Complex c;
    c.getvalue();
    c.display();
    ++c;
    c.display();
    --c;
    c.display();
    return 0;
}