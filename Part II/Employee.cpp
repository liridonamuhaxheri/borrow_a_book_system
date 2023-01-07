#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
#include "Employee.h"
int Employee::read_time(int h, int m, int s)
{
	int d;
	d = h * 3600 + m * 60 + s;
	return d;

}

void Employee::set_EmployeeName(string employeename)
{
	employee_name = employeename;

}
string Employee::get_EmployeeName()
{
	return employee_name;
}
Employee::Employee(int h, int m, int s, int age)
{

	read_time(h, m, s);
	if (age >= 18)
	{

		if ((read_time(h, m, s) > 32400) && (read_time(h, m, s) <= 50400))
		{
			set_EmployeeName("Ali");
			cout << "Hi I am ";
			cout << get_EmployeeName();
			cout << " How can I help you?" << endl;
		}
		else

			if ((read_time(h, m, s) > 50400) && (read_time(h, m, s) < 68400))
			{
				set_EmployeeName("Eylul");
				cout << "Hi I am ";
				cout << get_EmployeeName();
				cout << " How can I help you?" << endl;
			}
			else
			{
				cout << "Closed! We are sorry :(. You can find us from 09:00-19:00" << endl;
				cout << "Have a nice day!" << endl;
				exit(EXIT_FAILURE);

			}
	}
	else
		if (age < 18)
		{
			if ((read_time(h, m, s) > 32400) && (read_time(h, m, s) <= 50400))
			{
				set_EmployeeName("Imer");
				cout << "Hi I am ";
				cout << get_EmployeeName();
				cout << " How can I help you?" << endl;
			}
			else

				if ((read_time(h, m, s) > 50400) && (read_time(h, m, s) < 68400))
				{
					set_EmployeeName("Mimoza");
					cout << "Hi I am ";
					cout << get_EmployeeName();
					cout << " How can I help you?" << endl;
				}
				else
				{
					cout << "Closed! We are sorry :(. You can find us from 09:00-19:00" << endl;
					cout << "Have a nice day!" << endl;
					exit(EXIT_FAILURE);

				}
		}

}