#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
#include "User.h"
#include "Employee.h"
#include "Library.h"
#include "NonAdultLibrary.h"
#include "AdultLibrary.h"
#include "TheChoice.h"
bool Land_Borrow(int);
//Overloaded functions which are used to print the main programm deppends on user's age
void print(User, Employee, int, int, string);
void print(User, Employee, int);
int main()
{
	int id, age, is_borrowed;
	string name;
	cout << endl << "Write your ID:";
	cin >> id;
	cout << endl << "Write your name:";
	cin >> name;
	cout << endl << "Write your age:";
	cin >> age;
	int h, m, s;
	cout << "Hi Welcome, Write time:" << endl;
	cout << endl << "Write hours (0 - 24) : ";
	cin >> h;
	cout << endl << "Write Minutes: ";
	cin >> m;
	cout << endl << "Write secondes: ";
	cin >> s;
	cout << "The time is:" << setw(2) << setfill('0') << h << ":"
		<< setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s << endl;
	User U(id, name, age);
	Employee E(h, m, s, age);
	if (U.IsAdult(age) == false)
		print(U, E, id, age, name);
	else
		print(U, E, age);
	system("pause");
	return 0;
}
void print(User U, Employee E, int age)
{
	int chose_book, land_borrow, is_borrowed;
	Library* L;
	AdultLibrary AL;
	TheChoice THC;
	L = &THC;
	L = &AL;
Fillimi:
	cout << endl << "Choose 1 or 2 :" << endl;
	cout << "1--->" << "Borrow a book" << endl;
	cout << "2--->" << "Lend a book" << endl;
	cin >> is_borrowed;
	if (U.Isborrow(is_borrowed) == true)
	{
		cout << endl << "The simillar books on stock are:" << endl;
		L->set_bookauthor("Rexhep Hoxha");
		L->set_bookname("Lugjet e Verdha");
		cout << endl;
		cout << "1--->";
		L->print_listofbooks();
		cout << endl;
		L->set_bookauthor("Dritero Agolli");
		L->set_bookname("Drite Perallore");
		cout << "2--->";
		L->print_listofbooks();
		cout << endl;
		cin >> chose_book;
		if (U.Isborrow(chose_book) == true)
		{
			cout << "You have choosed the book named: '" << endl;
			L->set_bookauthor("Rexhep Hoxha");
			cout << endl;
			L->set_bookname("Lugjet e Verdha");
			L->print_listofbooks();
			cout << "\t";
			L->seric_number(chose_book);
			cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
				<< "Thank You!!" << endl;
		}
		else
		{
			cout << "You have choosed the book named: '" << endl;
			L->set_bookauthor("Dritero Agolli");
			L->set_bookname("Drite Perallore");
			L->print_listofbooks();
			cout << "\t";
			L->seric_number(chose_book);
			cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
				<< "Thank You!!" << endl;
		}
	}
	else
	{
		cout << "Thank you for Landing you book :)" << endl
			<< "Do you want to borrow another one?" << endl
			<< "Press '1' for Yes" << endl
			<< "Press '2' for No" << endl;
		cin >> land_borrow;
		if (Land_Borrow(land_borrow))
			goto Fillimi;
		else
		{
			cout << "Thank You, Bye!" << endl;
		}
	}

}
void print(User U, Employee E, int id, int age, string name)
{
	int chose_book, is_borrowed, land_borrow;
Fillimi1:
	cout << endl << "Choose 1 or 2 :" << endl;
	cout << "1--->" << "Borrow a book" << endl;
	cout << "2--->" << "Lend a book" << endl;
	cin >> is_borrowed;
	if (U.Isborrow(is_borrowed) == true)
	{
		cout << endl << "The simillar books on stock are:" << endl;
		cout << "Choose '1' or '2' " << endl;
		Library* L;
		AdultLibrary AL;
		L = &AL;
		L->set_bookauthor("Danielle Steel");
		L->set_bookname("Vetem Njehere nje Jete");
		cout << "1--->";
		L->print_listofbooks();
		cout << endl;
		L->set_bookauthor("George Orwell");
		L->set_bookname("1984");
		cout << "2--->";
		L->print_listofbooks();
		cout << endl;
		cin >> chose_book;
		if (U.Isborrow(chose_book) == true)
		{
			cout << "You have choosed the book named: '" << endl;
			L->set_bookauthor("Danielle Steel");
			L->set_bookname("Vetem Njehere nje Jete");
			L->print_listofbooks();
			cout << "\t";
			L->seric_number(chose_book);
			cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
				<< "Thank You!!" << endl;
		}
		else
		{
			cout << "You have choosed the book named: '" << endl;
			L->set_bookauthor("George Orwell");
			L->set_bookname("1984");
			L->print_listofbooks();
			cout << "\t";
			L->seric_number(chose_book);
			cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
				<< "Thank You!!" << endl;
		}

	}
	else
	{
		cout << "Thank you for Landing you book :)" << endl
			<< "Do you want to borrow another one?" << endl
			<< "Press '1' for Yes" << endl
			<< "Press '2' for No" << endl;
		cin >> land_borrow;
		if (Land_Borrow(land_borrow))
			goto Fillimi1;
		else
		{
			cout << "Thank You, Bye!" << endl;
		}
	}

}
bool Land_Borrow(int choice)
{
	if (choice == 1)
		return true;
	else
		if (choice == 2)
			return false;
}


