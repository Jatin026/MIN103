#include<bits/stdc++.h>
using namespace std;
int pass_marks;
ifstream in("marks.dat");
ofstream out1("pass.dat");
ofstream out2("fail.dat");
struct Student{
    char name[20];
    int roll;
    int marks;
    void input(){
        string s;
        in>>s>>roll>>marks;
        if(marks>=pass_marks){
            out1<<s<<"  "<<roll<<"   "<<marks<<"\n";
        }
        else{
            out2<<s<<"  "<<roll<<"   "<<marks<<"\n";
        }
        strcpy(name, s.c_str());
    }
};
int main(){
    in>>pass_marks;
    Student s[5];
    for (int i = 0; i < 5 ;  i++)
    {
        s[i].input();
    }
    return 0;
}