#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    float pos_sum = 0, neg_sum = 0, k;
    int count_pos = 0, count_neg = 0;
    ofstream out("output_nos.txt");
    ifstream in("q1text.txt");
    string s;
    while (!in.eof())
    {
        in>>s;
        k = stof(s);
        if (k > 0)
        {
            count_pos++;
            pos_sum += k;
        }
        else
        {
            count_neg++;
            neg_sum += k;
        }
    }
    if (count_pos == 0)
        out << "There is no positive number in the file \n";
    else
    {
        out << "The Sum of Positive numbers is :" << pos_sum << "\n";
        out << "The Count of Positive numbers is :" << count_pos << "\n";
        out << "The Average of Positive numbers is :" << pos_sum / count_pos << "\n";
    }
    if (count_neg == 0)
        out << "There is no negative number in the file \n";
    else
    {
        out << "The Sum of Negative numbers is :" << neg_sum << "\n";
        out << "The Count of Negative numbers is :" << count_neg << "\n";
        out << "The Average of Negative numbers is :" << neg_sum / count_neg << "\n";
    }
    return 0;
}