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
bool composite[sz];
void Sive_of_Eratosthenes()
{
    composite[0] = composite[1] = 1;
    for (int i = 2; i * i <= sz; i++)
    {
        if (!composite[i])
        {
            for (int j = i * i; j <= sz; j += i)
            {
                composite[j] = 1;
            }
        }
    }
}
int main()
{
    Sive_of_Eratosthenes();
    for (int i = 0; i <= 120; i++)
    {
        if (!composite[i])
        {
            cout << i << " " << endl;
        }
    }

    return 0;
}

