#include<string>
#ifndef Employee_h
#define Employee_h
class Employee //Employee class is used to take the name of employee who is working depending on time (morning/afternon)
{
private:
	string employee_name;
public:
	//get functions
	string get_EmployeeName();
	//set functions
	void set_EmployeeName(string);
	//constructor which print the name of employee depends on time
	void print_Employee_name(string);
	Employee(string);
	void write_Employee();

};
#endif // !Employee_h

