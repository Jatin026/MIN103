#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
    ifstream in("Interest_in.txt");
    ofstream out("Interest_out.txt");
    string s;
    getline(in,s);
    float rate=stof(s);
    float si_5,si_10,si_15,ci_5,ci_10,ci_15;
    si_5=50*rate;
    si_10=100*rate;
    si_15=150*rate;
    ci_5=1000*pow(1+rate/100,5)-1000;
    ci_10=1000*pow(1+rate/100,10)-1000;
    ci_15=1000*pow(1+rate/100,15)-1000;
    out<<"The Simple Interest after 5 years  at "<<rate<<"% is Rs "<<si_5<<"\n";
    out<<"The Simple Interest after 10 years at "<<rate<<"% is Rs "<<si_10<<"\n";
    out<<"The Simple Interest after 15 years at "<<rate<<"% is Rs "<<si_15<<"\n";
    out<<"The Compound Interest after 5 years  at "<<rate<<"% is Rs "<<ci_5<<"\n";
    out<<"The Compound Interest after 10 years at "<<rate<<"% is Rs "<<ci_10<<"\n";
    out<<"The Compound Interest after 15 years at "<<rate<<"% is Rs "<<ci_15<<"\n";
    return 0;
}