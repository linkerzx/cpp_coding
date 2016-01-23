#ifndef BINARYTREE
#define BINARYTREE

class leaf {
friend class tree;
private:
	int _key;
	leaf* _left;
	leaf* _right;
public:
	leaf(int key): _key(key), _left(NULL), _right(NULL) {}
	leaf* getLeft(void) {return _left;}
	leaf* getRight(void) {return _right;}
	int getKey(void) {return _key;}
};

class tree {
private:
	leaf* _root;
public:
	tree(int key) {
		insert(key);
	}
	void insert(int key, leaf* mleaf) 
	{
		if(key < mleaf->getKey())
		{
			if(mleaf->getLeft() != NULL)
				insert(key, mleaf->getLeft());
			else
				mleaf->_left = new leaf(key);	
			
		}
		else if(key >= mleaf->getKey())
		{
			if(mleaf->getRight() != NULL)
				insert(key, mleaf->getRight());
			else
				mleaf->_right = new leaf(key);
		}
	}
	leaf* search(int key, leaf* mleaf) {
			if(mleaf != NULL){
				if(key == mleaf->getKey())
				{	
					std::cout << "Key=" << mleaf->getKey() << std::endl;
					return mleaf;
				}
				if(key < mleaf->getKey())
				{
					std::cout << "Key<" << mleaf->getKey() << std::endl;
					return search(key, mleaf->getLeft());
				}
				if(key > mleaf->getKey())
				{
					std::cout << "Key>" << mleaf->getKey() << std::endl;
					return search(key, mleaf->getRight());
				}
			} 
			else return NULL;
	
	}
	void insert(int key) {
		if(_root != NULL)
			insert(key, _root);
		else {
			_root = new leaf(key);
                	_root->_left = NULL;
                	_root->_right = NULL;		
		}	
	}
	leaf* search(int key) {
		return search(key, _root);
	}
	void traverse_and_print() {}
	leaf* getRoot(){return _root;}
};

#endif
