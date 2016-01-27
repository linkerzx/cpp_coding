#ifndef TEACHER
#define TEACHER
class teacher{
private:
	int _id;
	std::string _firstname;
	std::string _lastname;
public:
	teacher(int id, std::string firstname, std::string lastname);
	std::string getFirstName();
	std::string getLastName();
};

#endif
