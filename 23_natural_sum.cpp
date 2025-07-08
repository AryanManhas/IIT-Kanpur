// #include<iostream>
// using namespace std;

// int s=0;
// int sum(int num) {
//     if (num == 0 || num == 1)
//         return num;

//     s += num;
//     sum(num-1);

// }

// int main() {
//     sum(10);

//     cout<<"Sum is: " << s;

//     return 0;

// }

#include<iostream>
using namespace std;

void sum(int num) {
    static int s=0; //static is a storage class which makes the variable as global.
    if (num == 0)
    {
        std::cout<<"Sum is: "<<s;
        return;
    }

    s += num;
    sum(num-1);
}

int main() {
    sum(10);
    return 0;

}