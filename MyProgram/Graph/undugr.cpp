
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
using namespace std;
const int sz = 1e3 + 10;
vector<int> adj_static(sz);
bool matrix[sz][sz];

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj_dynamic(n + 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        matrix[x][y] = matrix[y][x] =1;
        adj_dynamic[x].push_back(y);
        adj_dynamic[y].push_back(x);
        
    }
    cout << "Matrix" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------------------" << endl;
    cout << "Adjcency list" << endl;
    for (int i = 1; i < adj_dynamic.size(); i++)
    {
        cout << i << "{";
        for (int j = 0; j < adj_dynamic[i].size(); j++)
        {
            cout << adj_dynamic[i][j] << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}

