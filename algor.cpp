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

int main()
{
    ll size;
    cin >> size;
    vector<ll> v(size);
    for (auto &vv : v)
    {
        cin >> vv;
        if (vv % 2 == 0)
        {
            cout << vv << " ";
        }
    }
    return 0;
}