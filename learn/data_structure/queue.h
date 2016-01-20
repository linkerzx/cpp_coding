#ifndef QUEUE
#define QUEUE

class queue_elem {
friend class queue;
private:
	int _value;
	queue_elem* _pNext;
public:
	queue_elem(int value): _value(value), _pNext(NULL){}
	int getValue() { return _value;}
	queue_elem* getNext() {return _pNext;}
};

class queue{
private:
	queue_elem* _pHead;
	queue_elem* _pTail;
public:
	queue(int value) {
		_pHead = new queue_elem(value);
		_pTail = _pHead;
	}
	void put(int value){
		_pTail->_pNext = new queue_elem(value);
		_pTail = _pTail->getNext(); 
	}
	queue_elem* get(){
		return _pHead;	
	}
	int pop(){
		queue_elem* tmp = _pHead;
		int tmp_value = tmp->getValue();
		_pHead = _pHead->getNext();
		delete tmp;
		return tmp_value;
	}
	~queue(){
		while(_pHead->_pNext){
			queue_elem* tmp = _pHead;
			_pHead = _pHead->getNext();
			delete tmp; 
		}
	}
};

#endif
