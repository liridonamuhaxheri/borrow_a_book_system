#include<string>
#ifndef User_h
#define User_h
class User //class which is used for user's personal information
{
private:
	int user_id;
	string user_name;
	int user_age;

public:
	//set fuction
	void set_user(int, string, int);
	//get functions
	int get_id();
	string get_name();
	int get_age();
	//te constructor which takes the informations about user
	User(int, string, int);
	// the functions which are used to run the programm depending on user's choices
	bool Isborrow(int);
	bool IsAdult(int);
	bool choose_book(int);
};
#endif // !User_h




