#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>* v = new vector<int>;

    int i = 0;
    int input;
    while (i < 5) {
        cout << "Enter Value " << i + 1<<":";
        cin >> input;
        v->push_back(input);
        i++;
    }
// 134678
}