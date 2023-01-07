#include<string>
#ifndef Employee_h
#define Employee_h
class Employee //Employee class is used to take the name of employee who is working depending on time (morning/afternon)
{
public:
	string employee_name;
	//get functions
	string get_EmployeeName();
	//set functions
	void set_EmployeeName(string);
	//The function which reads the time
	int read_time(int, int, int);
	//constructor which print the name of employee depends on time
	Employee(int, int, int, int);

};
#endif // !Employee_h

