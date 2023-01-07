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
	Library(string, string);
	//get functions
	string get_bookname();
	string get_authorname();
	virtual void print() = 0;
	virtual void read_listofbooks() { };
	

};
#endif // !Library_h

