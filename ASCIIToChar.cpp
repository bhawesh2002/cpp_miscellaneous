// Print the values of all ASCII numbers in form of characters

#include <iostream>

using namespace std;

int main()
{
    cout << "ASCII"
         << "\t\t\t"
         << "CHARACTER" <<
        endl;
    for (int i = 33; i <= 126; i++)
    {
        cout << i << "\t\t\t" << char(i) << endl;
    }
    
    return 0;
}