#include<iostream>
#include<iomanip>
#include<cstring>
#include <fstream>
#include <sstream>
#include <cstdlib>
using std::ifstream;
#include "Library.h"
#include"NonAdultLibrary.h"
void NonAdultLibrary::seric_number(int choice)
{
	if (choice == 1)
		cout << "12345-23452-ISBN-3" << endl;
	else
		if (choice == 2)
			cout << "45346-23452-ISBN-6" << endl;
}
NonAdultLibrary::NonAdultLibrary(string name, string author, string publish,int prefer) :Library(name, author)
{
	Publishing_house = publish;
	age_of_prefer = prefer;
}
void NonAdultLibrary::read_listofbooks()
{
	fstream NonAdultLibrary("NonAdultLibrary.txt", ios::app);
	NonAdultLibrary << get_bookname()
		<< "," << get_authorname()
		<< "," << Publishing_house<<","<< age_of_prefer<<endl;
	NonAdultLibrary.close(); // file closed
}
void NonAdultLibrary::print()
{
	fstream NonAdultLibrary("NonAdultLibrary.txt", ios::in);
	if (!NonAdultLibrary)
	{
		cout << "file could not be open" << endl;
		exit(1);
	}
	string line;
	cout << "There is the list of most wanted books:  " << endl<< endl;
	int j = 0;
	while (getline(NonAdultLibrary, line) && j < 5)
	{
		stringstream  linestream(line);
		string        value;
		string bookName = ",", authorname = ",", publishing_house;
		int age_prefer;


		string singlebook[60];

		for (int i = 0; getline(linestream, value, ','); i++)
		{
			singlebook[i] = value;
		}
		cout << "Choose ----> " << j + 1 << "  for:" << endl;
		cout << "Book name: " << singlebook[0] << endl;
		cout << "Author name: " << singlebook[1] << endl;
		cout << "Publishing House: " << singlebook[2] << endl;
		cout << "Is prefered for age:" << singlebook[3] << endl;
		cout << "----------------------------------------" << endl;
		j++;
	}


}
int NonAdultLibrary::get_age_of_prefer()
{
	return age_of_prefer;
}
string NonAdultLibrary::get_publishing_house()
{
	return Publishing_house;
}