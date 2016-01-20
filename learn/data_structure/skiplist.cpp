#include <cstddef>
#include <iostream>
#include "skiplist.h"

using namespace std;

int main(){
	skiplistNode slN(10);
	skiplistElem nElem(20);
	slN.connect(&nElem);
	slN.list_connectionsValues();
	return 0;
}
