#ifndef LINKEDLIST_EX
#define LINKEDLIST_EX

class LinkNode {
	friend class LinkedList; 
private:
	int _value; 
	LinkNode *_pNext;
public: 
	/* constructors */ 
	LinkNode(void): _pNext(NULL) {}
	LinkNode(int value): _pNext(NULL), _value(value){}
	LinkNode(int value, LinkNode* next): _value(value), _pNext(next) {}
	/* Getters */
	int getValue(void) {
		return _value;
	}  
	LinkNode* getNext(void) {
		return _pNext;
	}
	/* Setter */
	void setNext(LinkNode* next) {
		_pNext = next;		
	}
};

class LinkedList 
{
private:
	LinkNode* _pHead;
	LinkNode* _pTail;
	LinkNode* _pCurrent;
public: 
	/* constructor */
	LinkedList(void) { _pTail = _pHead = NULL;}
	LinkedList(int value){
		_pHead = new LinkNode(value);
		_pTail = _pHead;
		_pCurrent = _pHead; 
	}
	/* Destructor */
	~LinkedList(void)
	{
		while(_pHead != NULL) {
			LinkNode* Next = _pHead->getNext();
			delete _pHead; 
			_pHead = Next; 		
		}
	}
	/* put extra value */	
	void put(int value){
		_pTail->_pNext = new LinkNode(value);
		_pTail = _pTail->getNext();
	}
	int get() 
	{
		
		return _pCurrent++->getValue();
	}
	
	void resetCurrent(void) { _pCurrent = _pHead;} 
};


#endif
