#include "std_lib_facilities.h"


constexpr double cm = 100;
constexpr double in_cm = 2.54;
constexpr double ft_in= 12;

double exchange(string unit, double value)
{

	double fvalue {0};


if(unit == "cm")
{
	fvalue= value/cm;
	cout<< "(" << fvalue <<" m)" << endl;
}
else if( unit == "in")
{
	fvalue= (value*in_cm)/cm;
	cout<< "(" << fvalue <<" m)" << endl;
}
else if( unit == "ft")
{
	fvalue = ((value*ft_in)*in_cm)/cm;
	cout<< "(" << fvalue <<" m)" << endl;
}
else if(unit == "m")
{
	fvalue = value;
}
else
{
	error("Not legal unit!");
}

return fvalue;
} 



int main()
{

cout<< "Enter a value followed by a unit." << endl;

cout<< "The valid units are: " << endl << "'m'=meter"<< endl 
<<"'cm'=centimeter" << endl << "'ft'=feet" << endl <<"'in'=inch" << endl;


double value = 0;
double min=9999;
double max=0;
double fvalue=0;
int count = 0;
double sum = 0;
vector <double> vector;

string unit;
while(cin >> value >> unit)
{
	fvalue = exchange(unit, value);

if(count == 0)
{
	cout<< "This is the first number, so this is the largest and the smallest so far : " << fvalue << " m"<< endl; 
	min=fvalue;
	max=fvalue;
}	

else  if(fvalue > max)
{
	max = fvalue;
	cout<< "the largest so far: " << max << " m"<<endl;
}
else if(fvalue < min)
{
	min = fvalue;
	cout<< "the smallest so far: "<< min << " m" <<endl;
}

++count;
sum+=fvalue;
vector.push_back(fvalue);

}

cout<< "The smallest value is: " << min << " m"<< endl;
cout<< "The largest value is: " << max << " m"<<endl;
cout<< "The count of values is: " << count << endl;
cout<< "The sum of the values is: " << sum << " m"<<endl;

sort(vector);

cout<< "These are the values that you entered in increasing order: " << endl;

for(int i =0 ; i< vector.size(); i++)
{
	cout<< vector[i]<<" m \n";

}



/*
double a = 0;
double b = 0;

while(cin >> a >> b)
{

	if(a < b)9999
	{
		cout<< "the smaller value is: " << a << endl;
		cout<< "the larger value is: " << b << endl;
	}
	if(b < a)
		{
			cout<< "the smaller value is: " << b << endl;
			cout<< "the larger value is: " << a << endl;
		}

		if(a == b)
		{
			cout<< "the numbers are equal" << endl;
		}
		if(a-b <0.1 && a-b > 0)
		{
			cout<< "the numbers are almost equal" << endl;
		}
		if(b-a <0.1 && b-a > 0)
		{
			cout<< "the numbers are almost equal" << endl;
		}
}*/


return 0;
}
