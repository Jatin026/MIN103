#include<bits/stdc++.h>
using namespace std;

int main(){
    double roll[10] , marks[10][5],avg[5]={0},stuavg[10]={0};
    for(int i=0 ; i< 10 ; i++){
        cin>>*(roll+i);
        for (int j = 0; j < 5 ; j++)
        {
            cin>>*(*(marks+i)+j);
            *(stuavg+i)+=*(*(marks+i)+j);
            *(avg+j)+=*(*(marks+i)+j);
        }
        *(stuavg+i)=*(stuavg+i)/5;
    }
    cout<<"......OUTPUT.....\n";
    cout<<"...... Average of Subjects .....\n";
    for (int i = 0; i < 5 ; i++)
    {
        cout<<*(avg+i)/5.0<<"  ";
    }
    cout<<"\n...... Student wise Average .....\n";
    for(int i=0 ; i< 10 ; i++){
        cout<<roll[i]<<"  "<<stuavg[i]<<"\n";
    }
    return 0;
}