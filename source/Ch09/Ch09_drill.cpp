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
	Month get_m() const { return m;}
	int get_y() const { return y;}
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
    // in case every month is 31 days
    int n_d = n % 31;          
    int n_m = (n / 31) % 12;   
    int n_y = n / (31*12);     

    d += n_d;
    
    if (d > 31) { ++n_m; d -= 31; }     // Day overflow
    if (d < 1)  { --n_m; d += 31; }     // Day underflow
 
    // Month type takes care of itself on overflows, but we loose track to 
    // modify year if it happens. We must check it before actually operate
    // on m.
    if (Month::dec < (int(m)+n_m)) ++n_y;
    if (Month::jan > (int(m)+n_m)) --n_y;
    m += n_m;  
    y += n_y;

 }

void Date::add_month(int n)
{
	int n_m = n % 12;
	int n_y = n / 12;

	if(Month::dec < (int(m)+ n_m)) ++n_y;
	if(Month::jan > (int(m)+ n_m)) --n_y;

	m += n_m;
	y += n_y;
	
}

void Date::add_year(int n)
{
	y += n;
}

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

	Date test{2000, Month::aug, 14};

	test.add_day(-7);

	cout<< "2000.8.7? " << '\t'<< test << '\n';

	test.add_day(7);

	cout<< "2000.8.14? " << '\t'<< test << '\n';

	Date test2{2000, Month::aug, 14};

	test2.add_month(25);

	cout<< "2002.9.14? " << '\t'<< test2 << '\n';

	test2.add_month(-25);

	test2.add_year(5);

	cout<< "2005.8.14? " << '\t'<< test2 << '\n';

	test2.add_year(-5);

	cout<< "2000.8.14? " << '\t'<< test2 << '\n';


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