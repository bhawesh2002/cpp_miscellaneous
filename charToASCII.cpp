// Write C++ program to print ASCII value of all alphabets

#include <iostream>

using namespace std;

int main()
{
    cout << "Char"
         << "\t\t\t"
         << "ASCII"
         << endl;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        cout << i << "   \t\t\t" << int(i) << endl;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        cout << i << "   \t\t\t" << int(i) << endl;
    }
    return 0;
}