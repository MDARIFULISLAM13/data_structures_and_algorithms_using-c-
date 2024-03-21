#include <bits/stdc++.h>
using namespace std;
int cheek(int n)
{
    return n && !(n & (n - 1));
}
int main()
{
    int n;
    cin >> n;
    cout << cheek(n);
}