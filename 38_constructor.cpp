#include<iostream>

using namespace std;

class btech{
	public:
		int sweets;
		static int stv;
};

int btech::stv = 2; // global initialization is mendatory

int main()
{
	btech s1, s2;

	cout<< s1.stv <<endl;
	cout<< s2.stv <<endl;

	return 0;
}

// Static Memeber Function se Static Data Member Access Kr Skte But Non Static Function se Satic Data Member and Non Static Data Member Access kr skte!!
