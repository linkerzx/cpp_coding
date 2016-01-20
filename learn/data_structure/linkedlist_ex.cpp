#include <cstddef>
#include <iostream> 
#include <sstream>
#include "linkedlist_ex.h"

using namespace std;

int main() {
	
	LinkedList myList(10);
	myList.put(4);
	myList.put(5);
	cout << myList.get() << "\n";
	cout << myList.get() << "\n";
	cout << myList.get() << "\n";
	cout << myList.get() << "\n";
	myList.resetCurrent(); 
	while(int x = myList.get()){
		cout << x << "\n";
	}
	return 0;
}
 
