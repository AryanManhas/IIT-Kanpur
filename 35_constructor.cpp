#include <iostream>
using namespace std;

class party{
	
	public:
		int samosa;
		int methai;
		string drink;
		
		// initializer list
		party(): samosa(2), methai(3), drink("cold coffe"){	}
		
//		party(){
//			
//			samosa = 2;
//			methai = 3;
//			drink = "cold coffe";
//		}
		
		void print(){
			
			cout<<"samosa: "<<samosa<<endl;
			cout<<"Sweets: "<< methai<<endl;
			cout<<"Drink: "<< drink<<endl;
		}
};

int main(){
	
	party s1, s2, s3, s4, s5;
	
	s1.print();
	s2.print();
	
	return 0;
}
