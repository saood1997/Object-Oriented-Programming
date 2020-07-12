#include <iostream>
#include <string>
using namespace std;

template <class T>

T find_max(T a , T b){    // generalized version of a function 

	T result;

	result = ( a > b ) ? a : b;

	return result;
}


int main(){

	cout<<find_max <int>(3,4)<<endl;
	cout<<find_max <string>("ali","zahid")<<endl;
	cout<<find_max <float>(3.4,4.9)<<endl;
	
	return 0;
}