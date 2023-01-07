#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
#include "Library.h"
void Library::set_bookname(string the_nameboook)
{
	book_name = the_nameboook;

}
void Library::set_bookauthor(string the_author)
{
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