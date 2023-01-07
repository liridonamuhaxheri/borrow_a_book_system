#include<string>
#include"Library.h"
#ifndef TheChoice_h
#define TheChoice_h
class TheChoice :public Library
{
public:
	void print_listofbooks(); //inheritance of Library class which is used to print the book which is choiced by user
};
#endif // !TheChoice_h

