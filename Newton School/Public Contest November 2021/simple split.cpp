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
        int  half = n /2;
        int *high = new int(half);
        int *low = new int(half);
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n-1; k++)
            {
                if(num[j] >num[k]){
                    swap(num[j],num[k]);
                }
            }
            
        }
        cout << "HIGH" << endl;
        for (int l = 0; l < half; l++)
        {
            high[l] = num[l];
            cout << high[l] << endl;
        }
        cout << "low" << endl;
        for (int l = half ; l < n; l++)
        {
            low[l] = num[l];
            cout << low[l] << endl;
        }
        
    }
    
    return 0;
}