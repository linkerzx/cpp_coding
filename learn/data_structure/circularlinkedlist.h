#ifndef CIRCULARLINKEDLIST
#define CIRCULARLINKEDLIST

class listItem {
friend class circularLinkedList;
private:
	int _value;
	listItem* _pNext;
public:
	listItem(int value): _value(value), _pNext(NULL) {
	}
	int getValue() { return _value;}
	listItem* getNext() {return _pNext;}
};

class circularLinkedList {
private:
	listItem* _pHead;
	listItem* _pTail;
	listItem* _pCurrent;	
public:
	circularLinkedList(int value){		
		_pHead = new listItem(value);
		_pTail = _pHead;
		_pCurrent = _pHead;
	}
	void add(int value){
		listItem* tmp = _pTail;
		_pTail = new listItem(value);
		tmp->_pNext = _pTail;
		_pTail->_pNext = _pHead;
	}
	void traverse_fully(int nbr){
		//add check for positive integer
		int nbr_cnt=1;	
		int i = 0;		
		while( (i<1 || &*_pCurrent->getNext() != &*_pHead->getNext()) || nbr_cnt < nbr){
			if(i>0 && &*_pCurrent->getNext() == &*_pHead->getNext())
				nbr_cnt++; 
			std::cout << _pCurrent->getValue() << std::endl;
			_pCurrent = _pCurrent->getNext();
			i++;
		}
	}

};

#endif
