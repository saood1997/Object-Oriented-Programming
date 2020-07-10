#include <iostream>
using namespace std;

#define size 5 // preprocessor directives

#define ABS(a) ((a)<0?-(a):(a)) // Macros

#define INCLUDE_INVENTORY_MODULE

#ifdef INCLUDE_INVENTORY_MODULE
void show_inventory(){
	cout << 	"Showing inventory" <<endl;
}
#endif


int main(){
	for (int i = 0; i < size; i++)
	{
		cout<< i << endl;
	}

	cout<< "size" <<endl; // Does not replace size with define preprocessor value 

	cout<<"absalute = "<<ABS(-5)<<endl;

	#ifdef INCLUDE_INVENTORY_MODULE
	show_inventory();
	#endif
}