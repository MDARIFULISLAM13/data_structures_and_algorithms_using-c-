#include <bits/stdc++.h>
using namespace std;
int clearbit(int n, int pos)
{
    int mask = ~(1 << pos);
    return mask & n;
}
int main()
{
    int n, pos;
    cin >> n >> pos;
    cout << clearbit(n, pos);
}