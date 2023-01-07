#include<string>
#include"Library.h"
#ifndef NonAdultLibrary_h
#define NonAdultLibrary_h
class NonAdultLibrary :public Library //inheritance of Library class which is used for children's library
{
public:
	void seric_number(int);
	void print_listofbooks();
};
#endif // !NonAdultLibrary_h

