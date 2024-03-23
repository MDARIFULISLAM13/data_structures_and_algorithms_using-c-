#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int start, end;
    while (n--)
    {
        cin >> start >> end;
        v.push_back({end, start});
    }
    sort(v.begin(), v.end());
    int take = 0;
    int last_time = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second >= last_time)
        {
            take++;
            last_time = v[i].first;
        }
    }
    cout << take;
}