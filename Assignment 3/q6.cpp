#include<iostream>
#include<cmath>
using namespace std;
float calc_sides(int x1,int x2,int y1,int y2){
    return(sqrt(pow((x1-x2),2)+pow(y2-y1,2)));
}
bool triangle_exist(float side1,float side2,float side3){
    if(side1+side2>side3 && side3+side1>side2 && side2+side3>side1){
        return 1;
    }
    else{
        return 0;
    }
}
void check_triangle(float side1,float side2,float side3){
    if(side1==side2==side3){
        cout<<"Equilateral Trianlge"<<endl;
    }
    else if(side1!=side2!=side3){
        cout<<"Scalence Triangle"<<endl;
    }
    else{
        cout<<"Isosceles Triangle"<<endl;
    }
}
float area_triangle(float side1,float side2,float side3){
    float s=(side1+side2+side3)/2;
    return(sqrtf(s*(s-side1)*(s-side2)*(s-side3)));
}
float perimeter(float side1,float side2,float side3){
    float s=(side1+side2+side3);
    return s;
}

float circumradius(float side1,float side2,float side3){
    float R=side3*side1*side2/(4*area_triangle(side1,side2,side3));
    return R;
}

int main(){
    int x1,x2,x3,y1,y2,y3;
    cout<<"Enter the value of x1 : ";
    cin>>x1;
    cout<<"Enter the value of x2 : ";
    cin>>x2;
    cout<<"Enter the value of x3 : ";
    cin>>x3;
    cout<<"Enter the value of y1 : ";
    cin>>y1;
    cout<<"Enter the value of y2 : ";
    cin>>y2;
    cout<<"Enter the value of y3 : ";
    cin>>y3;
    float side1,side2,side3;
    side1=calc_sides(x1,x2,y1,y2);
    side2=calc_sides(x2,x3,y2,y3);
    side3=calc_sides(x1,x3,y1,y3);
    if(triangle_exist(side1,side2,side3)==1){
        check_triangle(side1,side2,side3);
        cout<<"The Area of triangle is :"<<area_triangle(side1,side2,side3)<<endl;
        cout<<"The Perimeter of triangle is :"<<perimeter(side1,side2,side3)<<endl;
        cout<<"The Circumradius of triangle is :"<<circumradius(side1,side2,side3)<<endl;
        float theta1=acos(((side2*side2)+(side3*side3)-(side1*side1))/(2*side2*side3));
        float theta2=acos(((side3*side3)+(side1*side1)-(side2*side2))/(2*side1*side3));
        float theta3=acos(((side2*side2)+(side1*side1)-(side3*side3))/(2*side2*side1));
        float max_angle=(max(theta3,max(theta1,theta2))) ;
        
        if(round(max_angle*100000)==round((M_PI*100000)/2)){
            cout<<"Right Angled Triangle";
        }
        else if(max_angle<(M_PI)/2){
            cout<<"Acute Angled Triangle";
        }
        else{
            cout<<"Obtuse Angled Triangle";
        }
    }
    else{
        cout<<"The triangle does not exist"<<endl;
    }
    return 0;
}