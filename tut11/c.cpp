#include<bits/stdc++.h>
using namespace std;
class Complex{
    double x,y;
    public:
        Complex(){
            x=0;
            y=0;
        }
        Complex(double x , double y){
            this->x=x;
            this->y=y;
        }
        Complex(const Complex &c){
            x=c.x;
            y=c.y;
        }
        Complex operator +(Complex &obj){
            Complex c1;
            c1.x=x+obj.x;
            c1.y=y+obj.y;
            return c1;
        }
        Complex operator -(Complex &obj){
            Complex c1;
            c1.x=x - obj.x;
            c1.y=y - obj.y;
            return c1;
        }
        void operator - (){
            x=-x;
            y=-y;
        }
        friend ostream& operator << (ostream& os,const Complex &obj){
            os<<"("<<obj.x<<") + ("<<obj.y<<")i";
            return os;
        }
        Complex operator ++ (){
            x+=1;
            y+=1;
        }
        Complex operator -- (){
            x-=1;
            y-=1;
        }
        double operator || (Complex &obj){
            return (sqrt(x*x + y*y));
        }
        friend bool operator == (Complex c1, Complex c2){
            if(c1.x==c2.x && c2.y==c2.y) return 1;
            return 0;
        }

};
class Circle{
    Complex center;
    float radius;
    public: 
        Circle(Complex &c,float r){
            radius=r;
            center=c;
        }
        void display(){
            cout<<"The Center lies at : "<<center<<" and The Radius is "<<radius;
        }
        bool concentric(Circle c){
            return (center==c.center);
        }
        bool similar(Circle c){
            return (c.radius==radius);
        }

};
int main(){
    Complex c1(5,3),c2,c3(1,1);
    ++c1;
    cout<<c1<<"\n";
    --c1;
    cout<<c1<<"\n";
    -c1;
    cout<<c1<<"\n";
    cout<<(c1||c2)<<"\n";
    cout<<(c1-c3)<<"\n";
    Circle c(c1,5);
    c.display();
    return 0;
}