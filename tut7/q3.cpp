#include<bits/stdc++.h>
using namespace std;
string lower(string s){
    for (int i = 0; i < s.size(); i++)
    {
        s[i]=tolower(s[i]);
    }
    return s;
}
int main(){
    int rollnumber[11],marks[11];
    string name[11];
    float avg=0;
    for (int i = 1; i <= 10; i++)
    {
        cin>>name[i]>>rollnumber[i]>>marks[i];
        avg+=marks[i];
    }
    cout<<"The Average is : "<<avg/10<<endl;
    string s;
    
    while (s!="quit")
    {
        cout<<"Enter the roll number : ";
        cin>>s;
        if(lower(s)=="quit"){
            cout<<"Program Ended\n";
            break;
        }
        if(stoi(s)>10 || stoi(s)<1){
            cout<<"Entry not available\n";
        }
        else{
            cout<<"Name : "<<name[stoi(s)]<<endl;
            cout<<"Roll number : "<<rollnumber[stoi(s)]<<endl;
            cout<<"Marks : "<<marks[stoi(s)]<<endl;
        }
    }
    
    return 0;
}