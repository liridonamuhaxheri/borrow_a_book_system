#include<string>
#include"Library.h"
#ifndef AdultLibrary_h
#define AdultLibrary_h
class AdultLibrary : public Library //inheritance of Library class which is used for adult's library
{
private:
	string Publishing_house;
public:
	void seric_number(int);
	AdultLibrary(string,string,string);
	void read_listofbooks();
	void print();
	string get_publishing_house();
	
};
#endif // !AdultLibrary_h

