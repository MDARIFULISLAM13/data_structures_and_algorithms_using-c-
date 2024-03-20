#include <bits/stdc++.h>
using namespace std;
void arif(int n, int p)

{
    int x = ~(1 << p);
    cout << (x & n);
}
int main()
{
    int n, p;
    cin >> n >> p;
    arif(n, p);
}