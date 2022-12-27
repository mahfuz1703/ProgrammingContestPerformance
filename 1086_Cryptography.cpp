#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> primes;
    vector<int> o;
    for (int i = 2; i <= 15000; i++)
    {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            primes.push_back(i);
        }
    }

    for (int k{0}; k < n; k++)
    {
        int a;
        cin >> a;
        o.push_back(a);
    }

    for (int l{0}; l < n; l++)
    {
        cout << primes[o[l]-1] << endl;
    }

    return 0;
}