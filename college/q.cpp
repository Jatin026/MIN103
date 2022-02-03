#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name[20];                 // Array to store name.
    float avg[20];                   // Average marks of every student.
    float subav[5];                  // Subject wise average.
    memset(subav, 0, sizeof(subav)); //Initializing the array with 0. , defined in headerfile->cstring.
    memset(avg, 0, sizeof(avg));
    int marks[20][5];
    for (int i = 0; i < 20; i++)
    {
        cin >> name[i]; // Taking the input for Name
        for (int j = 0; j < 5; j++)
        {
            cin >> marks[i][j];      // Input for Marks
            avg[i] += marks[i][j];   //Adding all the marks in the avgarray.
            subav[j] += marks[i][j]; // Adding the respective marks of each subject in the subav array.
        }
        avg[i] /= 5; // Taking the Average
    }
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << "\t" << subav[i] / 20 << "\n"; // Displaying the average in each subject.
    }
    int r;
    cin >> r;                                          // Taking required roll no. as input.
    cout << name[r - 1] << "  " << avg[r - 1] << endl; // Displaying the name and average marks.
    return 0;
}