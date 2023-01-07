#include<iostream>
#include<iomanip>
#include<cstring>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "Employee.h"
void Employee::set_EmployeeName(string employeename)
{
	employee_name = employeename;

}
string Employee::get_EmployeeName()
{
	return employee_name;
}
Employee::Employee(string name)
{
	employee_name = name;
}
void Employee::write_Employee()
{
	fstream file("Employee.txt", ios::app); //Append a new reader
	file << employee_name << endl;
	file.close();
}
void Employee::print_Employee_name(string _name)
{
	
	fstream file("Employee.txt", ios::in);
	cout << _name;
}