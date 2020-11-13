#include "../../std_lib_facilities.h"

namespace UDChrono{


enum class Month{
	jan=1,feb,mar,apr,may,june,july,aug,sept,oct,nov,dec
};

Month operator+(const Month& m, int n)
{
	int r = int(m)+n;
	r %= int(Month::dec);

	if(r==0) return Month::dec;
	return Month(r);
}

Month operator-(const Month& m, int n) {return (m+(-n));}
Month operator +=(Month& m, int n) { m = m + n; return m;}

bool operator<(const Month& m, int n) { return int(m) < n;}
bool operator>(const Month& m, int n) { return int(m) > n;}

class Date
{
private:
	int y;
	Month m;
	int d;
public:
	class Invalid{};
	bool is_valid();
	Date(int y, Month m, int d): y(y), m(m), d(d) { if (!is_valid()) throw Invalid {}; }
	int get_y() const { return y;}
	Month get_m() const { return m;}
	int get_d() const { return d;}

	void add_day(int n);
	void add_month(int n);
	void add_year(int n);

};


bool Date::is_valid(){

    if(Month::dec < m || Month::jan > m)return false;
	if(d >31 || d < 1)return false;
	else
	{
		return true;
	}

}

void Date::add_day(int n)
{
	//in case every month has 31 days
	int n_d = n % 31;
	int n_m= (n/31) % 12;
	int n_y= n/(31*12);

	y += n_y;
	m += n_m;
	d += n_d;

	//Must check for negative numbers
	if(d > 31) { ++n_m; d -= 31;}
	if(d < 1 ) { --n_m; d += 31;}
	if(Month::dec < (int(m)+n_m)) { n_y++;}
	if(Month::jan > (int(m)+n_m)) { n_y--;}

	m += n_m;
	y += n_y; 
}

/*void add_month(int n)
{
	int n_m = n % 12;
	int n_y = n / 12;

	if(Month::dec < (int(m)+ n_m)) ++n_y;
	if(Month::jan > (int(m)+ n_m)) --n_y;

	m += n_m;
	y += n_y;
	
}

void add_year(int n)
{
	y += n;
}*/

ostream& operator<<(ostream& os, Date& d)
{
	return os << d.get_y()
			  << '.' << int(d.get_m())
			  << '.' <<	d.get_d();				
}

};//UDChrono end


int main()
try
{

 using UDChrono::Date;
 using UDChrono::Month;


	Date today{2002,Month::dec,17};


	cout<< today <<endl;

	today.add_day(16);

	cout<< today;



return 0;
}
catch (UDChrono::Date::Invalid) {
   error("Error: Invalid date\n");
	return 1; 
}
catch(exception& e)
{
	cout<< e.what() << endl;
	return 3;
}
