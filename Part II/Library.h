#include<string>
#ifndef Library_h
#define Library_h
class Library //an abstact class which is used for adult and nonadult classes
{
private:
	string book_name;
	string author_name;

public:
	//set functions
	void set_bookname(string);
	void set_bookauthor(string);
	//get functions
	string get_bookname();
	string get_authorname();
	//virtual function
	virtual void seric_number(int a) {  };
	//pure virtual function
	virtual void print_listofbooks() = 0;

};
#endif // !Library_h

