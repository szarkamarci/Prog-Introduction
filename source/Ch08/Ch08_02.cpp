#include "../../std_lib_facilities.h"

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a,int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//This void does not compile, because these are read-only references

/*void swap_cr(const int& a, const int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}*/

int main()
{

	int x = 7;
	int y = 9;
	swap_r(x,y); //this is working
	//swap_v(x,y); //does not swap anything
	//swap_v(7,9) //does nothing becase, the values are not saved
	//swap_v(7,9) //does not compile



	cout<< "x value: " << x << endl << "y value: " << y << endl;

	

	const int cx = 7;
	const int cy = 9;

	//swap_r(cx,cy); //does not compile
	//swap_v(cx,cy); //does not swap

	//spaw_v(7.7,9.9);//Does nothing, but compiles
	//spaw_r(7.7,9.9);//Does not compiles



	cout<< "cx value: " << cx << endl << "cy value: " << cy << endl;

	double dx = 7;
	double dy = 9;

	//spaw_v(dx, dy); //Does nothing, but compiles
	//spaw_v(dx, dy); //Does not compile, double to int, can not made reference

	cout<< "dx value: " << dx << endl << "dy value: " << dy << endl;





	return 0;
}