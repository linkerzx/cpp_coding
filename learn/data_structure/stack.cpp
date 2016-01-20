#include <cstddef> 
#include <iostream>
#include <sstream>
#include "stack.h"

using namespace std;

int main(){
	stack mystack(10);
	mystack.put(40);
	while(int x = mystack.pop())
		cout << x << endl;
	return 0;
}
