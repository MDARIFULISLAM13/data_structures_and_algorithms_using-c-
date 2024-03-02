#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9] = {1, 2, 3, 5, 5, 5, 4, 5, 6};
    list<int> mylist(arr, arr + 9);
    list<int>::iterator it;
    // it = find(mylist.begin(), mylist.end(), 4);
    // mylist.erase(it);
    mylist.remove(5);
    for (it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << endl;
    }
}