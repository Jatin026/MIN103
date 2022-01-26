#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ofstream out("out.txt");
    ifstream in("in.txt");
    string s,k="";
    getline(in,s);
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!=' '){
            k+=toupper(s[i]);
        }
        else{
            out<<k;
            out<<"\n";
            k="";
        }
    }
    out<<k;
    out<<"\n";
    return 0;
}