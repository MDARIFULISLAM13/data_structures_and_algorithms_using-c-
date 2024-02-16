#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int currentsum[n + 1];
    currentsum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        currentsum[i] = currentsum[i - 1] + array[i - 1];
    }
    int maxsum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i - 1; j++)
        {
            sum = currentsum[i] - currentsum[j];
            maxsum = max(sum, maxsum);
        }
    }
    cout << maxsum << endl;
}
