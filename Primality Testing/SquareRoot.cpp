#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed is_prime(int n)
{
    bool flag = true;
    if (n == 1 || n == 2)
        flag = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            flag = false;
    }
    if (flag)
        cout << n << " is a prime number" << endl;
    else
        cout << n << " is not a prime number" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    is_prime(9);
}