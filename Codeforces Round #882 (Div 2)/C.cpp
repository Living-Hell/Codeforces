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

#define INT_SIZE 9

struct TrieNode
{
    int value;
    TrieNode *v[2];
};

TrieNode *newNode()
{
    TrieNode *temp = new TrieNode;
    temp->value = 0;
    temp->v[0] = temp->v[1] = NULL;
    return temp;
}
void insert(TrieNode *root, int pre)
{
    TrieNode *temp = root;
    for (int i = INT_SIZE - 1; i >= 0; i--)
    {
        bool val = pre & (1 << i);
        if (temp->v[val] == NULL)
            temp->v[val] = newNode();

        temp = temp->v[val];
    }
    temp->value = pre;
}
int query(TrieNode *root, int pre)
{
    TrieNode *temp = root;
    for (int i = INT_SIZE - 1; i >= 0; i--)
    {
        bool val = pre & (1 << i);
        if (temp->v[1 - val] != NULL)
            temp = temp->v[1 - val];
        else if (temp->v[val] != NULL)
            temp = temp->v[val];
    }
    return pre ^ (temp->value);
}

int maxXOR(vl v, int n)
{
    TrieNode *root = newNode();
    insert(root, 0);

    int result = INT_MIN, pre = 0;

    for (int i = 0; i < n; i++)
    {
        pre = pre ^ v[i];
        insert(root, pre);
        result = max(result, query(root, pre));
    }
    return result;
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
        ll n = 0, k = 0;
        cin >> n;
        vl v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << maxXOR(v, v.size()) << endl;

    }

    return 0;
}