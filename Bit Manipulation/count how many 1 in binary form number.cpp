#include <bits/stdc++.h>
using namespace std;
void cheek(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    cout << count;
}
int main()
{
    int n;
    cin >> n;
    cheek(n);
}