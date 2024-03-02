#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    list<int> mylist(arr, arr + 5);
    list<int>::iterator it;
    it = find(mylist.begin(), mylist.end(), 3);

    mylist.insert(it, 100);
    for (it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << endl;
    }
}