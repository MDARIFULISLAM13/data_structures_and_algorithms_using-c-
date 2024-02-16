#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<float> mylist;
    list<float>::iterator it;

    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_front(5);
    for (it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}