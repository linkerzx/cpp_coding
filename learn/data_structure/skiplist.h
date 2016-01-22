#ifndef SKIPLIST 
#define SKIPLIST

class skiplistElem {
private:
	int _value;
public:
	skiplistElem(int value):_value(value){}
	int getValue(void) {return _value;} 
};

const int TABLE_SIZE = 128;
class skiplistNode {
private:
	skiplistElem* _pElem;
	int _Height;
	skiplistElem** _pTable;
public:
	skiplistNode(int value){
		_pElem = new skiplistElem(value);
		_Height = 0;
		_pTable = new skiplistElem*[TABLE_SIZE];
		_pTable[0] = _pElem;
		for(int i=1; i < TABLE_SIZE; i++)
			_pTable[i] = NULL;
	}
	~skiplistNode(){
		delete _pElem;
		delete _pTable;
	}
	void connect(skiplistElem* myElem) {
		/* Might be better replaced by a call to Height */
		int i=0;
		while(_pTable[i]!=NULL)
			i++;
		_pTable[i] = myElem;
		_Height = _Height++;		
	}
	void list_connectionsValues(void) {
		for(int i=0;i<TABLE_SIZE;i++)
		{ 
			if(_pTable[i] != NULL)
			{ 
				std::cout << _pTable[i]->getValue() << std::endl; 
			}
		}	
	}

};


#endif 
