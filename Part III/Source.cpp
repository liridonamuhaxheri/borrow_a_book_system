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
#include "Employee.h"
#include "Employee.cpp"
#include"Library.h"
#include"Library.cpp"
#include"AdultLibrary.h"
#include"AdultLibrary.cpp"
#include"NonAdultLibrary.h"
#include"NonAdultLibrary.cpp"
void print_Adultchoice(int);
void print_NonAdultchoice(int);
int main()
{
    // current date/time based on current system
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int time_to_sec;
    int Id;
    // print various components of tm structure.
    cout << "Date: " << setfill('0') << setw(2) << ltm->tm_mday << "-";
    cout << setfill('0') << setw(2)<< 1 + ltm->tm_mon << "-";
    cout << 1900 + ltm->tm_year << endl;
    cout << "Time: " << setfill('0') <<setw(2)<< ltm->tm_hour << ":";
    cout << setfill('0') << setw(2) << ltm->tm_min << ":";
    cout << setfill('0') << setw(2)  << ltm->tm_sec << endl;
    time_to_sec = ltm->tm_hour * 3600 + ltm->tm_min * 60 + ltm->tm_sec;
    User U(128887, "Liridona", 21),
        U1(128560, "Ardian", 17);
    cout << "Enter your ID:";
    cin >> Id;
    if (Id == 128887)
    {
        U.write_user();
        char password[] = "liridona123";
        cout << "Enter password : ";
        U.ask_password(password); // function call
        getch();
        cout << "\033[2J\033[1;1H";//it cleans the screen!
        cout << "Hi!  " << U.get_name() << endl;
        if ((time_to_sec > 32400) && (time_to_sec <= 50400))
        {
            Employee E("Ali");
            E.write_Employee();
            cout << " I am ";
            E.print_Employee_name("Ali");
            cout << " How can I help you?" << endl;
        }
        else

            if ((time_to_sec > 50400) && (time_to_sec <=68400))
            {
                Employee E1("Eylul");
                E1.write_Employee();
                cout << "I am ";
                E1.print_Employee_name("Eylul");
                cout << " How can I help you?" << endl;
            }
            else
            {
                cout << "We are Closed! We are sorry :(. You can find us from 09:00-19:00" << endl;
                cout << "Have a nice day!" << endl;
                exit(EXIT_FAILURE);
            }
        Library* L;
        int is_borrowed;
        cout << endl << "Choose 1 or 2 :" << endl;
        cout << "1--->" << "Borrow a book" << endl;
        cout << "2--->" << "Lend a book" << endl;
        cin >> is_borrowed;
        cout << "\033[2J\033[1;1H";
        if (U.Isborrow(is_borrowed))
        {
        LIBRARY:
            AdultLibrary AL("To Kill a Mockingbird", "Harper Lee", "Hachette");
            AdultLibrary AL1("1984", "George Orwell", "Penguin Random House");
            AdultLibrary AL2("Harry Potter and the Philosopher’s Stone", "J.K. Rowling", "Simon & Schuster");
            AdultLibrary AL3("The Great Gatsby", "F. Scott Fitzgerald", "Macmillan");
            AdultLibrary AL4("Pride and Prejudice", "Jane Austen", "Harper Collins");
            L = &AL;
            L->read_listofbooks();
            L = &AL1;
            L->read_listofbooks();
            L = &AL2;
            L->read_listofbooks();
            L = &AL3;
            L->read_listofbooks();
            L = &AL4;
            L->read_listofbooks();
            L->print();
            int choice;
            cout << "Enter your Choice and press ENTER" << endl;
            cin >> choice;
            cout << "\033[2J\033[1;1H";//it cleans the screen!
            print_Adultchoice(choice);
        }
        else
        {
            int land_borrow;
            cout << "Thank you for Landing you book :)" << endl
                << "Do you want to borrow another one?" << endl
                << "Press '1' for Yes" << endl
                << "Press '2' for No" << endl;
            cin >> land_borrow;
            if (U.land_borrow(land_borrow))
                goto LIBRARY;
            else
            {
                cout << "Thank You, Bye!" << endl;
            }
        }

    }
    else
    {
        U1.write_user();
        char password1[] = "ardian";
        cout << "Enter password : ";
        U.ask_password(password1); // function call
        getch();
        cout << "\033[2J\033[1;1H";//it cleans the screen!
        cout << "Hi!  " << U1.get_name();
        if ((time_to_sec > 32400) && (time_to_sec <= 50400))
        {
            Employee E2("Imer");
            E2.write_Employee();
            cout << " I am ";
            E2.print_Employee_name("Imer");
            cout << " How can I help you?" << endl;
        }
        else

            if ((time_to_sec > 50400) && (time_to_sec <= 68400))
            {
                Employee E3("Mimoza");
                E3.write_Employee();
                cout << "I am ";
                E3.print_Employee_name("Mimoza");
                cout << " How can I help you?" << endl;
            }
            else
            {
                cout << "We are Closed! We are sorry :(. You can find us from 09:00-19:00" << endl;
                cout << "Have a nice day!" << endl;
                exit(EXIT_FAILURE);

            }
        int is_borrowed;
        cout << endl << "Choose 1 or 2 :" << endl;
        cout << "1--->" << "Borrow a book" << endl;
        cout << "2--->" << "Lend a book" << endl;
        cin >> is_borrowed;
        cout << "\033[2J\033[1;1H";
        if (U1.Isborrow(is_borrowed))
        {
        LIBRARY1:
            Library* L;
            NonAdultLibrary NAL("Mister Magnolia", "Quentin Blake", "Candlewick Press", 6);
            NonAdultLibrary NAL1("Mortal Engines", "Philip Reeve", "Hogs Back Books", 11);
            NonAdultLibrary NAL2("How I Live Now", "Meg Rosoff", "Kids Can Press", 13);
            NonAdultLibrary NAL3("The Fault in Our Stars", "John Green", "Macmillan", 16);
            NonAdultLibrary NAL4("The Curious Incident of the Dog in the Night Time", "Mark Haddon", "Harper Collins", 17);
            L = &NAL;
            L->read_listofbooks();
            L = &NAL1;
            L->read_listofbooks();
            L = &NAL2;
            L->read_listofbooks();
            L = &NAL3;
            L->read_listofbooks();
            L = &NAL4;
            L->read_listofbooks();
            L->print();
            int choice;
            cout << "Enter your Choice and press ENTER:";
            cin >> choice;
            cout << "\033[2J\033[1;1H";//it cleans the screen!
            print_NonAdultchoice(choice);
        }
        else
        {
            int land_borrow;
            cout << "Thank you for Landing you book :)" << endl
                << "Do you want to borrow another one?" << endl
                << "Press '1' for Yes" << endl
                << "Press '2' for No" << endl;
            cin >> land_borrow;
            if (U1.land_borrow(land_borrow))
                goto LIBRARY1;
            else
            {
                cout << "Thank You, Bye!" << endl;
            }
        }

    }

    system("pause");
    return 0;

}
void print_Adultchoice(int choice)
{
    int wrong;
    Library* L;
    AdultLibrary AL("To Kill a Mockingbird", "Harper Lee", "Hachette");
    AdultLibrary AL1("1984", "George Orwell", "Penguin Random House");
    AdultLibrary AL2("Harry Potter and the Philosopher’s Stone", "J.K. Rowling", "Simon & Schuster");
    AdultLibrary AL3("The Great Gatsby", "F. Scott Fitzgerald", "Macmillan");
    AdultLibrary AL4("Pride and Prejudice", "Jane Austen", "Harper Collins");
    switch (choice)
    {
    case 1:
        cout << "You have choosed the book:" << endl;
        cout << "Book name: " << AL.get_bookname() << endl;
        cout << "Author name: " << AL.get_authorname() << endl;
        cout << "Publishing House: " << AL.get_publishing_house() << endl;
        cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
            << "Thank You!!" << endl;
        break;
    case 2:
        cout << "You have choosed the book:" << endl;
        cout << "Book name: " << AL1.get_bookname() << endl;
        cout << "Author name: " << AL1.get_authorname() << endl;
        cout << "Publishing House: " << AL1.get_publishing_house() << endl;
        cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
            << "Thank You!!" << endl;
        break;
    case 3:
        cout << "You have choosed the book:" << endl;
        cout << "Book name: " << AL2.get_bookname() << endl;
        cout << "Author name: " << AL2.get_authorname() << endl;
        cout << "Publishing House: " << AL2.get_publishing_house() << endl;
        cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
            << "Thank You!!" << endl;
        break;
    case 4:
        cout << "You have choosed the book:" << endl;
        cout << "Book name: " << AL3.get_bookname() << endl;
        cout << "Author name: " << AL3.get_authorname() << endl;
        cout << "Publishing House: " << AL3.get_publishing_house() << endl;
        cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
            << "Thank You!!" << endl;
        break;
    case 5:
        cout << "You have choosed the book:" << endl;
        cout << "Book name: " << AL4.get_bookname() << endl;
        cout << "Author name: " << AL4.get_authorname() << endl;
        cout << "Publishing House: " << AL4.get_publishing_house() << endl;
        cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
            << "Thank You!!" << endl;
        break;
    default:
        cout << " Not acceptable Value! PLEASE TRY AGAIN!" << endl;
        cout << "Press ENTER to see again what you can choose" << endl;
        getch();
        L = &AL;
        L->read_listofbooks();
        L = &AL1;
        L->read_listofbooks();
        L = &AL2;
        L->read_listofbooks();
        L = &AL3;
        L->read_listofbooks();
        L = &AL4;
        L->read_listofbooks();
        L->print();
        cout << "Enter your choice:";
        cin >> wrong;
        cout << "\033[2J\033[1;1H";
        print_Adultchoice(wrong);
        break;
    }
}
void print_NonAdultchoice(int choice)
{
    int wrong;
    Library* L;
    NonAdultLibrary NAL("Mister Magnolia", "Quentin Blake", "Candlewick Press", 6);
    NonAdultLibrary NAL1("Mortal Engines", "Philip Reeve", "Hogs Back Books", 11);
    NonAdultLibrary NAL2("How I Live Now", "Meg Rosoff", "Kids Can Press", 13);
    NonAdultLibrary NAL3("The Fault in Our Stars", "John Green", "Macmillan", 16);
    NonAdultLibrary NAL4("The Curious Incident of the Dog in the Night Time", "Mark Haddon", "Harper Collins", 17);

    switch (choice)
    {
    case 1:
        cout << "You have choosed the book:" << endl;
        cout << "Book name: " << NAL.get_bookname() << endl;
        cout << "Author name: " << NAL.get_authorname() << endl;
        cout << "Publishing House: " << NAL.get_publishing_house() << endl;
        cout << "Is prefered for age:" << NAL.get_age_of_prefer() << endl;
        cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
            << "Thank You!!" << endl;
        break;
    case 2:
        cout << "You have choosed the book:" << endl;
        cout << "Book name: " << NAL1.get_bookname() << endl;
        cout << "Author name: " << NAL1.get_authorname() << endl;
        cout << "Publishing House: " << NAL1.get_publishing_house() << endl;
        cout << "Is prefered for age:" << NAL1.get_age_of_prefer() << endl;
        cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
            << "Thank You!!" << endl;
        break;
    case 3:
        cout << "You have choosed the book:" << endl;
        cout << "Book name: " << NAL2.get_bookname() << endl;
        cout << "Author name: " << NAL2.get_authorname() << endl;
        cout << "Publishing House: " << NAL2.get_publishing_house() << endl;
        cout << "Is prefered for age:" << NAL2.get_age_of_prefer() << endl;
        cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
            << "Thank You!!" << endl;
        break;
    case 4:
        cout << "You have choosed the book:" << endl;
        cout << "Book name: " << NAL3.get_bookname() << endl;
        cout << "Author name: " << NAL3.get_authorname() << endl;
        cout << "Publishing House: " << NAL3.get_publishing_house() << endl;
        cout << "Is prefered for age:" << NAL3.get_age_of_prefer() << endl;
        cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
            << "Thank You!!" << endl;
        break;
    case 5:
        cout << "You have choosed the book:" << endl;
        cout << "Book name: " << NAL4.get_bookname() << endl;
        cout << "Author name: " << NAL4.get_authorname() << endl;
        cout << "Publishing House: " << NAL4.get_publishing_house() << endl;
        cout << "Is prefered for age:" << NAL4.get_age_of_prefer() << endl;
        cout << endl << "ATTENTION! \n You must return the book within 14 days" << endl
            << "Thank You!!" << endl;
        break;
    default:
        cout << " Not acceptable Value! PLEASE TRY AGAIN!" << endl;
        cout << "Press ENTER to see again what you can choose" << endl;
        getch();
        L = &NAL;
        L->read_listofbooks();
        L = &NAL1;
        L->read_listofbooks();
        L = &NAL2;
        L->read_listofbooks();
        L = &NAL3;
        L->read_listofbooks();
        L = &NAL4;
        L->read_listofbooks();
        L->print();
        cout << "Enter your choice:";
        cin >> wrong;
        cout << "\033[2J\033[1;1H";
        print_NonAdultchoice(wrong);
        break;
    }
}



