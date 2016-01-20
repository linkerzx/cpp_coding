#ifndef HASHMAP_EX2
#define HASHMAP_EX2


class HashEntry{
private:
	int _key;
	int _value;
public:
	/* Constructor */
	HashEntry(int value, int key):_value(value), _key(key) {} 
	/* Getter */	
	int getValue(void) {
		return _value;	
	}
	int getKey(void) {
		return _key;
	}
};


const int TABLE_SIZE = 128;

class HashMap {
private:
	HashEntry **table; 
public:
	/* constructor */
	HashMap(){
		table = new HashEntry*[TABLE_SIZE];
		for(int i=0;i<TABLE_SIZE;i++)
			table[i] = NULL;		
	}
	
	void put(int key, int value){
		int hash = key % TABLE_SIZE;	
		while(table[hash] != NULL && table[hash]->getKey() != Key)				hash = (hash +1) % TABLE_SIZE;
		if(table[hash] == NULL) 
			delete table[hash];
		table[hash] = new HashEntry(key,value);		
	}
	int get(int key){
		int hash = key % TABLE_SIZE;
		while(table[hash] != NULL && table[hash]->getKey() != key)
			hash = (hash + 1) % TABLE_SIZE;
		if(table[hash] == NULL)
			return NULL;
		return table[hash]->getValue();
	}
	~HashMap(){
		for(int i=0;i<TABLE_SIZE;i++)
			if(table[i] != NULL) 
				delete table[i];
		delete table[];
	}	
};



#end if
