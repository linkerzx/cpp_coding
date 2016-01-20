#ifndef HASHMAP_EX
#define HASHMAP_EX

class HashEntry
{
private:
	int _key;
	int _value;
public: 
	/* constructor */
	HashEntry(int key, int value) {
		this->_key = key;
		this-> _value = value;	
	} 
	/* getters */
	int getKey(void) {
		return _key; 
	}
	int getValue(void) {
		return _value;
	}

};

const int TABLE_SIZE = 128;

class HashMap{
private:
	HashEntry **table;
public:
	HashMap() {
		table = new HashEntry*[TABLE_SIZE];
		for(int i=0 ; i<TABLE_SIZE;i++)
			table[i] = NULL;

	}	
	
	/* getter */ 
	int get(int key) {
		int hash = (key %TABLE_SIZE);
		while(table[hash] != NULL && table[hash]->getKey() != key)
			hash = (hash + 1) % TABLE_SIZE;
		if(table[hash] == NULL) 
			return -1;
		else 
			return table[hash]->getValue();
	}
	
	void put(int key, int value) {
		int hash = (key % TABLE_SIZE); 
		while(table[hash] != NULL && table[hash]->getKey() != key)
			hash = ( hash +1 ) % TABLE_SIZE;
		if(table[hash] == NULL)
			delete table[hash];
		else
			table[hash] = new HashEntry(key, value);
	}
	
};


#endif 
