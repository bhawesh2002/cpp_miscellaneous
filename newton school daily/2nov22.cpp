/*Problem Statement
Bob has two integers, x and y, and wants to calculate their product.
As he likes integers so he wants to print the product as an integer.
Input
Constraints
0≤A≤10 ^ 15
0≤B<10
A is an integer.
B is a number with two digits after the decimal point.
Output
Print the answer as an integer.
Example
Sample Input 1
198 1.10

Sample Output 1
217
We have 198×1.10=217.8. After truncating the fractional part, we have the answer: 217.

Sample Input 2
1 0.01

Sample Output 2
0

Sample Input 3
1000000000000000 9.99

Sample Output 3
9990000000000000*/

#include <iostream> // header file includes every Standard library
#include <iomanip>
using namespace std;

int main()
{

    int a = {};
    double b = {};
    cin >> a;
    cin >> b;
    if ((a >= 0 && a < 100000) && (b >= 0 && b < 10))
    {

        int product = a * b;
        cout << fixed;
        cout << setprecision(2);
        cout << int(product);
    }
    return 0;
}