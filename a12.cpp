#include <iostream>
#include <stdlib.h> 
using namespace std;


//////// START OF MARKER FOR fib
long long int fib(int n){
	long long int a = 0, b = 1, c, i;
  if( n <= 1)
    return n;
  for (i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;	    
 }
//////// END OF MARKER 



//////// DO NOT MODIFY CODE BEYOND THIS LINE

int main(int argc, char* argv[]) {
    cout << (fib(atoi(argv[1]))) <<endl;
    return 0;
}
