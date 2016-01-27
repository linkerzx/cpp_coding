#ifndef STUDENT
#define STUDENT
class student {
private:
	int _id;
	std::string _firstname;
	std::string _lastname;
	std::string _address;
public:
	student(int id, std::string firstname, std::string lastname); 
	int getId();
	std::string getFirstName();
	std::string getLastName();
	std::string getAddress();
};
#endif
