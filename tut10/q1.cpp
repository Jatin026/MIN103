#include<bits/stdc++.h>
using namespace std;
class Room{
    int length,breadth,height;
    public:
        Room(int l , int b, int h){
            length=l;
            breadth=b;
            height=h;
        }
        int area();
        int volume();
};
int Room :: volume(){
            return (length*breadth*height);
        }
int Room :: area(){
            return (2*length*breadth+2*breadth*height+2*height*length);
        }
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    Room r(x,y,z);
    cout<<"Area is : "<<r.area()<<"\n";
    cout<<"Volume is : "<<r.volume();
    return 0;
}