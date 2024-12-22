#include <iterator>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <utility>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define dpp(arr, val) memset(arr, val, sizeof(arr))
#define ll long long
#define ull unsigned long long
#define dd double
#define ld long double
#define PQ priority_queue
#define pii pair<int, int>
#define pll pair<ll, ll>
#define S second
#define F first
#define MP make_pair
#define endl "\n"
using namespace std;
const int sz = 1e6 + 10;
int composite[sz];
vector<int> prime;
void PrimeOrNot()
{
    composite[0] = composite[1] = 1;
    for (int i = 2; i <= sz; ++i)
    {
        if (!composite[i])
        {
            prime.push_back(i);
        }
        for (int j = 0; j < (int)prime.size() && i * prime[j] <= sz; j++)
        {
            composite[i * prime[j]] = 1;
            if (i % prime[j] == 0)
            {
                break;
            }
        }
    }
}
int main()
{
    IOS
    PrimeOrNot();
    ll size;
    cin >> size;
    vector<ll> v(size);
    for (auto &vv : v)
    {
        cin >> vv;
 
        dd res1 = sqrt(vv);
        ll res2 = sqrt(vv);
 
        if (composite[res2] == 0 && res1 == res2 && res2 != 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
