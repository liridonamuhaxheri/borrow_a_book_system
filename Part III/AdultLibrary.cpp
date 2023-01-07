#include<iostream>
#include<iomanip>
#include<cstring>
#include <fstream>
#include <sstream>
#include <cstdlib>
using std::ifstream;
#include "Library.h"
#include "AdultLibrary.h"
void AdultLibrary::seric_number(int choice)
{
	if (choice == 1)
		cout << "12345-23452-ISBN-3" << endl;
	else
		if (choice == 2)
			cout << "45346-23452-ISBN-6" << endl;
}
AdultLibrary::AdultLibrary(string name, string author, string publish) :Library(name, author)
{
	Publishing_house=publish;
}
void AdultLibrary::read_listofbooks()
{
	fstream AdultLibrary("AdultLibrary.txt", ios::app);
	AdultLibrary << get_bookname()
		<<","<< get_authorname()
		 << "," << Publishing_house<<endl;
	AdultLibrary.close(); // file closed
}
void AdultLibrary::print()
{
	fstream AdultLibrary("AdultLibrary.txt", ios::in);
	if (!AdultLibrary)
	{
		cout << "file could not be open" << endl;
		exit(1);
	}
	string line;
	cout << "There is the list of most wanted books:  " << endl << endl;
	int j = 0;
	while (getline(AdultLibrary, line)&&j<5) 
	{
		stringstream  linestream(line);
		string        value;
		string bookName = ",", authorname=",",publishing_house;
		

		string singlebook[60];

		for (int i = 0; getline(linestream, value,','); i++)
		{
			singlebook[i] = value;
		}
		cout << "Choose ----> " << j + 1 << "  for:" << endl;
		cout << "Book name: " << singlebook[0] << endl;
		cout << "Author name: " << singlebook[1] << endl;
		cout << "Publishing House: " << singlebook[2] << endl;
		cout << "----------------------------------------" << endl;
		j++;
	}
		
	
}
string AdultLibrary::get_publishing_house()
{
	return Publishing_house;
}
