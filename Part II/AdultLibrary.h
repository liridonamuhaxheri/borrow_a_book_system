#include<string>
#include"Library.h"
#ifndef AdultLibrary_h
#define AdultLibrary_h
class AdultLibrary : public Library //inheritance of Library class which is used for adult's library
{
public:
	void seric_number(int);
	void print_listofbooks();
};
#endif // !AdultLibrary_h

