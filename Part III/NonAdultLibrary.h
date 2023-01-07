#include<string>
#include"Library.h"
#ifndef NonAdultLibrary_h
#define NonAdultLibrary_h
class NonAdultLibrary :public Library //inheritance of Library class which is used for children's library
{
private:
	string Publishing_house;
	int age_of_prefer;
public:
	void seric_number(int);
	NonAdultLibrary(string, string, string,int);
	void read_listofbooks();
	void print();
	//get age of prefer
	int get_age_of_prefer();
	string get_publishing_house();
};
#endif // !NonAdultLibrary_h

