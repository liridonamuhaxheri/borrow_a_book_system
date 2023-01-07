#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
#include "Library.h"
#include "TheChoice.h"
void TheChoice::print_listofbooks()
{
	cout << get_bookname() << "\t" << get_authorname();

}