#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
#include "User.h"
User::User(int the_id, string the_name, int the_age)
{
	user_id = the_id;
	user_name = the_name;
	user_age = the_age;
}
void User::set_user(int id, string name, int age)
{
	user_id = id;
	user_name = name;
	user_age = age;
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
bool User::choose_book(int choice)
{
	if (choice == 1)
		return true;
	else
		if (choice == 2)
			return false;
}