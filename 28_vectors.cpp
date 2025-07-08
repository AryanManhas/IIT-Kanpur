#include<iostream>
#include<vector>
using namespace std;

int main()
{
    pair <char, int> p[5];

    p[0].first = 'A';
    p[0].second = 1;

    p[1].first = 'B';
    p[1].second = 2;

    p[2].first = 'C';
    p[2].second = 3;

    p[3].first = 'D';
    p[3].second = 4;

    p[4].first = 'E';
    p[4].second = 5;;

    p[5].first = 'F';
    p[5].second = 6;

   for (int i=0; i<5; i++)
   {
        cout<<p[i].first<<" "<<p[i].second<<endl;
   }


    return 0;
}