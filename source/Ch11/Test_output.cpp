#include "../../std_lib_facilities.h"



int main()
{

	int birth_year = 2001;

	cout<< birth_year << "\t(decimal)\n" <<
	hex << birth_year << "\t(hexadecimal)\n" <<
	oct << birth_year << "\t(octal)\n";

	//set default back to decimal
	cout<< dec << endl;

	int age = 19;

	cout<< age << "\t(decimal)\n" <<
	hex << age << "\t(hexadecimal)\n" <<
	oct << age << "\t(octal)\n";

	//set default back to decimal
	cout<< dec << endl;

	int a,b,c,d;

	cout<< "Type 4 integer" << endl;
	//the program reads the first number as decimal, the second as octal, the last two as hexadecimal
	cin >> a >> oct >> b >> hex >> c >> d;
	cout<< a << "\t" << b << "\t" << c << "\t" << d << endl;
	//set default back to decimal
	cout<< dec << endl;

	float number = 1234567.89;

	cout<< defaultfloat << number << "\t(defaultfloat)\n" 
		<< fixed   		<< number << "\t(fixed)\n"
	 	<< scientific 	<< number << "\t(scientific)\n"
	 	<< endl;



	 	cout<<'|'<<setw(11)<<"Firstname"
		<<'|'<<setw(10)<<"Lastname"
		<<'|'<<setw(12)<<"Phone number"
		<<'|'<<setw(20)<<"e-mail"<<"|\n";
		//content
	cout<<'|'<<setw(11)<<"Marcell"
		<<'|'<<setw(10)<<"Szarka"
		<<'|'<<setw(12)<<"06705125881"
		<<'|'<<setw(20)<<"szmarci@gmail.com"<<"|\n";
	cout<<'|'<<setw(11)<<"Andras"
		<<'|'<<setw(10)<<"Toth"
		<<'|'<<setw(12)<<"06705125882"
		<<'|'<<setw(20)<<"tandris@freemail.hu"<<"|\n";
	cout<<'|'<<setw(11)<<"Mate"
		<<'|'<<setw(10)<<"Veres"
		<<'|'<<setw(12)<<"06705125883"
		<<'|'<<setw(20)<<"matev@email.com"<<"|\n";
	cout<<'|'<<setw(11)<<"Denes"
		<<'|'<<setw(10)<<"Szarka"
		<<'|'<<setw(12)<<"06705125884"
		<<'|'<<setw(20)<<"denessz@gmail.com"<<"|\n";
	cout<<'|'<<setw(11)<<"Milan"
		<<'|'<<setw(10)<<"Kicska"
		<<'|'<<setw(12)<<"06705125885"
		<<'|'<<setw(20)<<"kmilan@junkmail.cz"<<"|\n";
	cout<<'|'<<setw(11)<<"Hugo"
		<<'|'<<setw(10)<<"Boss"
		<<'|'<<setw(12)<<"06705125886"
		<<'|'<<setw(20)<<"noreply@boss.com"<<"|\n";








return 0;
}

