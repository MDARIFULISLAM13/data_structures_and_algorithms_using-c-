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
    int maxsum = INT_MIN;
    int currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum += array[i];
        maxsum = max(currentsum, maxsum);
        if (currentsum < 1)
        {
            currentsum = 0;
        }
    }
    cout << maxsum << endl;
}