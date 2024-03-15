/*
Any composite number c must have a prime factor such that P< C
*/

// Time Complexity: O(N*log(log(N)))

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed prime(int n)
{
    bool primes[n + 1];
    fill(primes, primes+n+1, true);

    primes[0] = primes[1] = false;
    for (int i = 0; i * i <= n; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }

    if (primes[n])
        cout << n << " is a prime number" << endl;
    else
        cout << n << " is not a prime number" << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    prime(9);
}