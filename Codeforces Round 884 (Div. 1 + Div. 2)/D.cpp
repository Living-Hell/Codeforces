#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
#define all(a) a.begin(), a.end()
#define pb push_back
#define sz(a) ((int)a.size())

void primeFactors(int n, vl prime)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        prime.push_back(2);
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            prime.push_back(2);
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        prime.push_back(n);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 2) {cout << 'a' << 'b' << endl; continue;}
        vl v;
        set<ll> st;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i != 0) continue;
            st.insert(i + 1);
            if (n / i != i)
                st.insert(n / i + 1);
        }

        for (ll i : st)
            v.push_back(i);

        ll ans = 0;

        for (int i = 1; i < v.size(); i++) {
            if (v[i] - v[i - 1] != 1) {
                ans = i;
                break;
            }
        }

        vector<char> final(n);
        int count = 0;

        for (int i = 0; i <= ans; i++) {
            char ch = 'a' + count;
            for (int j = i; j < n; j += ans + 1) {
                final[j] = ch;
            }
            count++;
        }
        // string s = "";
        for (char i : final) {
            // s += i;
            // s += " ";
            cout << i;
        }
        // s.pop_back();
        // cout << s << endl;
        cout << endl;
    }

    return 0;
}