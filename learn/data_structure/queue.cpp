#include <cstddef> 
#include <iostream>
#include "queue.h"

using namespace std;

int main() {
	queue myQueue(10);
	myQueue.put(20);
	myQueue.put(30);
	while(int x = myQueue.pop())
		cout << x << endl;
	cout << myQueue.get()->getValue() << endl;
	return 0;
} 
