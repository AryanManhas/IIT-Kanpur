#include <iostream>
using namespace std;

int main(){
	
	int num = 20;
	int *ptr = &num;
	int **pptr = &ptr; 	// double pointer or pointer to pointer
	
	printf("%d \n", ptr);		// Address of num
	printf("%d \n", &num);		// Address of num
	printf("%d \n", pptr );		// Address of ptr
	printf("%d \n", &ptr );		// Address of ptr
	printf("%d \n", **pptr );	// 20
	printf("%d \n", ***(&pptr));	// 20
	printf("%d \n", *(&pptr) );		// Address of ptr
	printf("%d \n", *(&num) );		// 20
	printf("%d \n", **(&ptr) );		// 20
	
	return 0;
}
