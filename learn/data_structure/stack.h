#ifndef STACK
#define STACK


class stack_elem
{
friend class stack;
private:
	int _value;
	stack_elem* _pNext;
public: 
	stack_elem(int value): _value(value), _pNext(NULL){} 
	int getValue(){
		return _value;
	}
	stack_elem* getNext() {
		return _pNext;
	}
};


class stack
{
private:
	stack_elem* _pCurrent;
public:
	/* Constructor */
	stack(int value){
		_pCurrent = new stack_elem(value);	
	}	
	/* Putter */
	void put(int value) {
		stack_elem* tmp = _pCurrent;
		_pCurrent = new stack_elem(value);
		_pCurrent->_pNext = tmp;
	}
	/* Getter */
	int pop() {
		stack_elem* tmp = _pCurrent;
		int tmp_value = tmp->getValue(); 
		_pCurrent = _pCurrent->getNext(); 
		delete tmp;
		return tmp_value? tmp_value: 0;
	}
	~stack(){
		while(_pCurrent->getNext() != NULL)
		{	
			stack_elem* tmp = _pCurrent;
			_pCurrent = _pCurrent->getNext();
			delete tmp;
		}
		delete _pCurrent;	 
	}
};

#endif
