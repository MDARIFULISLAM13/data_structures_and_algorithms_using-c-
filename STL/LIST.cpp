#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<float> mylist;
    list<float>::iterator it;

    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_front(5);
    mylist.reverse();
    for (it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << endl;
    }
    cout << mylist.size() << endl;
    mylist.clear();
    cout << mylist.size() << endl;

    return 0;
}