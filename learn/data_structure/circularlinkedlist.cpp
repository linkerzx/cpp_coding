#include <cstddef>
#include <iostream>
#include "circularlinkedlist.h"

using namespace std;

int main() {
	circularLinkedList test(0);
	test.add(10);
	test.add(20);
	test.traverse_fully(0);
	return 0;}

