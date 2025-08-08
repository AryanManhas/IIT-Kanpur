#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map <string, int> mp;

    mp["Aryan"]=5;
    mp["Anurag"]=2;
    mp["Ashish"]=9;

    mp.insert({"Abhi", 1});

    for(auto it: mp)
    {
        cout<<it.first<<"\t"<< it.second<<endl;
    }

    return 0;
}      
// output of map is always inorder traversal