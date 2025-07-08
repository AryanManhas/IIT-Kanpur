/*
#include<iostream>
using namespace std;

int main()
{

}

array-> {10,12,11,19,17,16}
index-> {0,1,2,3,4,5}

array-. {10,11,12,16,17,19}
index-> {0,2,1,5,4,3}

sort an array with there index element.
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr = {10,12,11,19,17,16};
    pair <int , int> p[arr.size()];

    for (int i=0; i<arr.size(); i++)
    {
        p[i] = make_pair(arr[i], i);
    }

    for (int i=0 ; i<arr.size()-1;i++)
    {
        for (int j=0;j<arr.size()-i-1;j++){
            if (p[j].first>p[j+1].first)
                swap(p[j],p[j+1]);
        }
    }

    for(int i=0; i<arr.size();i++)
    {
        cout << "Value: " << p[i].first << ", Original Index: " << p[i].second << endl;
    }
}