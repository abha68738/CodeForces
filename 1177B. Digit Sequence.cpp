#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll k;
    cin >> k;

    if (k < 10) {
        cout << k << endl;
        return 0;
    }

    ll m = 9, d = 1, cnt = 9;
    while (true) {
        if (k > cnt)
            m *= 10, d++, cnt += (m * d);
        else
            break;
    }

    cnt = 0;
    m /= 10;
    ll j = 1;
    for (ll i = 9; i <= m; i *= 10)
        cnt += (i * j), j++;

    ll q = (k - cnt) / d;
    ll r = (k - cnt) % d;

    j--;
    ll x = 0;
    while (j > 1) {
        x = (x * 10) + 9;
        j--;
    }

    m += x;

    if (!r) {
        ll n = m + q;
        cout << n % 10 << endl;
    }
    else {
        ll n = m + q + 1;
        r = d - r;

        while (r--) {
            n /= 10;
        }

        cout << n % 10 << endl;
    }

    return 0;
}
