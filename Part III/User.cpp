#pragma warning(disable:4996)
#include<iostream>
#include<iomanip>
#include<cstring>
#include <ctime>
#include <conio.h>
#include<stdio.h>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "User.h"
User::User(int the_id, string the_name, int the_age)
{
	user_id = the_id;
	user_name = the_name;
	user_age = the_age;
}
bool User::Isborrow(int isborrowed)
{
	if (isborrowed == 1)
		return true;
	else
		if (isborrowed == 2)
			return false;
}
int User::get_id()
{
	return user_id;
}
string User::get_name()
{
	return user_name;
}
int User::get_age()
{
	return user_age;
}
bool User::IsAdult(int age)
{
	if ((age > 7) && (age < 18))
		return true;
	else
		if ((age >= 18) && (age < 100))
			return false;

}
bool User::land_borrow(int choice)
{
	if (choice == 1)
		return true;
	else
		if (choice == 2)
			return false;
}
void User::write_user()
{
	fstream file("User.txt", ios::app); //Append a new reader
	file << user_id << " " << user_name << " " << user_age << " "  << endl;
	file.close();
}
void User::ask_password(char password[])
{
    START:
    int i, x;
    char ch = '/0', match[20];
    for (i = 0; i >= 0;)
    {
        ch = getch();

        if (ch != 8 && ch != 13)
        {
            cout << "*";
            match[i] = ch;
            i++;
        }
        else if (ch == 8) // if backspace is presssed
        {
            cout << "\b \b"; // moves cursor to the left print <space> again move cursor to left
            i--;
        }
        else if (ch == 13)
        {
            match[i] = '\0'; // if enter is pressed, last character in match[] becomes null
            break;         // for end of string
        }
        else
        {
            break;
        }
    }
	if (strcmp(match, password) == 0)// comparing two strings.. if equal returns 0
	{
        cout << endl << "Login Succesfully!" << endl;
        cout << "Press ENTER to Continue" << endl;
	}
    else
    {
        cout << endl << "Wrong password" << endl<<"Try it again:"<<endl;
        goto START;
    }
}
