#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;
    int capacity;
    for(int i=1;i<=n;i++){
        capacity='A';
        for(int j=0;j<2*n+1;j++){
            if(i+j>=n &&  capacity==64+i){
                cout<<"*"<<char(capacity)<<"*"<<endl;
                break;
                }
            else if(i+j>=n&&  capacity<64+i){
                cout<<"*"<<char(capacity);
                capacity++;
        }
            else {
                cout<<" ";
            }
         
    }
    }
    return 0;
}