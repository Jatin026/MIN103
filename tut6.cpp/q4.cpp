#include<bits/stdc++.h>
using namespace std;
int matrix[3][3],cons[3],matrix1[3][3],matrix2[3][3],matrix3[3][3];
int det3(int a[3][3]){
    return(a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])+a[0][1]*(a[1][2]*a[2][0]-a[1][0]*a[2][2])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]));
}
void copy(){
    for (int i = 0; i < 3; i++)
    {
        matrix1[i][0]=cons[i];
        for (int j = 0; j < 3; j++)
        {
            if(j!=0 ){
                matrix1[i][j]=matrix[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        matrix2[i][1]=cons[i];
        for (int j = 0; j < 3; j++)
        {
            if(j!=1 ){
                matrix2[i][j]=matrix[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        matrix3[i][2]=cons[i];
        for (int j = 0; j < 3; j++)
        {
            if(j!=2 ){
                matrix3[i][j]=matrix[i][j];
            }
        }
    }
}
void input(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>matrix[i][j];
        }
        cin>>cons[i];
    }
}
int main(){
    input();
    copy(); 
    float x,y,z;
    int DET=det3(matrix);
    int detA=det3(matrix1);
    int detB=det3(matrix2);
    int detC=det3(matrix3);
    x=detA*1.0/DET;
    y=detB*1.0/DET;
    z=detC*1.0/DET;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
    return 0;
}