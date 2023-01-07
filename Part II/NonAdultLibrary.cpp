#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
#include "Library.h"
#include "NonAdultLibrary.h"
void NonAdultLibrary::print_listofbooks()
{
	cout << get_bookname() << "\t" << get_authorname();
}
void NonAdultLibrary::seric_number(int choice)
{
	if (choice == 1)
		cout << "12345-23452-ISBN-3" << endl;
	else
		if (choice == 2)
			cout << "45346-23452-ISBN-6" << endl;
}