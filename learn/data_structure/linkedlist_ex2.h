#ifndef LINKEDLIST_EX2
#define LINKEDLIST_EX2

class Node{
friend class LinkedList;
private:
	int _value;
	Node* _pNext; 
public:
	/* constructor */
	Node(int value): _value(value), _pNext(void) {}
	Node(int value, Node* next): _value(value), _pNext(next) {}
	/* getters */
	int getValue() {
		return _value;
	}
	Node* getNext() {
		return _pNext;
	}
};


class LinkedList {
private: 
	Node* _pHead;
	Node* _pTail;
public:
	/* constructor */
	LinkedList(void) {
		_pHead = _pTail = NULL;
	}
	LinkedList(int value){
		_pHead = new Node(value);
		_pTail = _pHead;		
	}		
	/* putter */
	void put(int value) {
		_pTail->_pNext = new Node(value);
		_pTail = _pTail->_pNext;	
	}

};



#endif
