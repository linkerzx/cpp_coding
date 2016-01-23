#include <cstddef>
#include <iostream>
#include "binarytree.h"
#include <string>

using namespace std;



int main() { 
	tree test(10);
	test.insert(5);
	test.insert(4);
	test.insert(15);
	test.insert(11);
	test.insert(14);
	test.insert(2);
	test.insert(50);
	test.insert(60);
	test.insert(90);
	test.insert(200);
	cout << "test" << endl;
	leaf* testo = test.getRoot();
	leaf* testb = test.getRoot()->getLeft();
	leaf* testc = test.search(60);
	cout << testc->getKey() << endl;
	//cout << test.search(12)->getKey() << endl;
	return 0;
;}
