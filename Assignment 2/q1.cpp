#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int det, trace;
    int entries[2][2];
    int entry;
    for(int i=0 ; i<2;i++){
        for (int j = 0; j < 2; j++)
        {
            cin>>entry;
            entries[i][j]=entry;
        }
    }
    det=entries[0][0]*entries[1][1]-entries[1][0]*entries[0][1];
    trace=entries[0][0]+entries[1][1];
    float lambda1,lambda2;
    lambda1=(trace+ pow((trace*trace-4*det),0.5))/2;
    lambda2=(trace- pow((trace*trace-4*det),0.5))/2;
    cout<<"The eigen values are : "<<lambda1<<" and "<<lambda2;
    return 0;
}