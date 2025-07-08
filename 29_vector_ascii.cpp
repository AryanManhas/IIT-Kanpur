#include<iostream>
#include<vector>
using namespace std;

int main()
{
    pair <char , int> p[256];

    for (int i = 0 ; i < 256; i++)
    {
        p[i] = make_pair(i, i);
    }

    for (int i = 0; i < 256; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }

    return 0;
}
