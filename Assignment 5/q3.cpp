#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("q3file.txt");
    string s;
    int sum=0;
    while(!in.eof()){
        in>>s;
        sum+=s.size();
    }
    cout<<"The total characters in a file is : "<<sum<<endl;
    in.clear();
    int n;
    cout<<"Enter the nth postition you want character of : ";
    cin>>n;
    in.seekg(n-1);
    char g;
    in.get(g);
    cout<<"The character at the nth position is : "<<g; 
    in.close();
    return 0;
}