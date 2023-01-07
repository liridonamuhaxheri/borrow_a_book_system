
#include<string>
#ifndef User_h
#define User_h
class User //class which is used for user's personal information
{
private:
	int user_id;
	string user_name;
	int user_age;
	char Password[];

public:
	//get functions
	int get_id();
	string get_name();
	int get_age();
	User(int the_id, string the_name, int the_age);
	// the functions which are used to run the programm depending on user's choices
	bool Isborrow(int);
	bool IsAdult(int);
	bool land_borrow(int);
	void write_user();
	void ask_password(char []);
};
#endif // !User_h





