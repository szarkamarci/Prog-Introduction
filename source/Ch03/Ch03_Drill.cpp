#include "std_lib_facilities.h"
using namespace std;

int main()
{

int age;
string first_name;
string last_name;
string friend_name;
char sex=0;

cout<< "Please enter your first name, than press ENTER!" << endl;

cin>> first_name;

cout<< "Hello, " << first_name << " ! " <<endl;

cout << "Enter the name of the preson you want to write to: " << endl;

cin >> first_name;

cout<< "Dear " << first_name <<","<< endl;

cout<<"I have not seen you in a while, how are you?"<< endl;

cout<< "It was at least a year since we talked and i really miss you...." << endl << endl;

cout<< "Name a friend you'd like to know about: " << endl;

cin>> friend_name ; 

cout<< "If your friend is male than write 'm' if she is a female write 'f': " << endl;

cin >> sex;

if(sex == 'm')
{
cout<< "If you see "<<friend_name<< " please ask him to call me."<< endl;
}
if(sex == 'f')
{
cout<< "If you see "<<friend_name<< " please ask her to call me."<< endl;
}

cout<< "How old are you?"<< endl;

cin>> age;

if(age <1 || age > 109)
{
	simple_error("you're kidding");
}if(sex == 'm')
{
cout<< "If you see "<<friend_name<< " please ask him to call me."<< endl;
}

if(age <12)
{
	cout<<"Next year you will be "<< age+1 <<"."<< endl; 
}
if(age == 17)
{
	cout<< "Next year you will be able to vote." << endl;
}
if(age>69)
{
	cout<< "I hope you are enjoying retirement." << endl;
}

cout<< "Yours sincerely," << endl << endl <<"Marci"<< endl;

return 0;
}
