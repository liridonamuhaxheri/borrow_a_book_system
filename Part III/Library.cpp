#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
#include "Library.h"
Library::Library(string the_namebook, string the_author)
{
	book_name = the_namebook;
	author_name = the_author;
}
string Library::get_bookname()
{
	return book_name;
}
string Library::get_authorname()
{
	return author_name;
}
