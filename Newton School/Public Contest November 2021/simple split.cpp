/*You are given an array of integers of length N, where N is even.

You need to split the array into two parts of equal size in such a way that the difference between the sums of the parts is maximised. The sum of a part is defined as the sum of the elements it contains.

Note that each element of the original array must be in exactly one of the parts.

Print the maximum possible difference.*/
// Link:- https://my.newtonschool.co/playground/code/1pctmsttzq3g/

#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int *num = new int(n);
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
    }
    return 0;
}