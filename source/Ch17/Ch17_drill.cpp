#include "../../std_lib_facilities.h"

ostream& print_array10(ostream& os, int* a)
{
	for(int i = 0; i<10 ; ++i)
	{
		os<< a[i] << endl;
	}
	return os;
}

ostream& print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i < n ; ++i)
	{
		os<< a[i] << endl;
	}
	return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
	for(int i = 0; i<v.size(); ++i)
	{
		os << v[i] << endl;
	}
	return os;
}

int main()
{

	int* values = new int[10];

	/*
	for(int i = 0; i < 10; ++i)
	{
		cout<< values[i] << endl;
	}
	*/

	print_array10(cout, values);

	delete[] values;


	int* values2 = new int [10] {100,101,102,103,104,105,106,107,108,109};
	
	print_array10(cout, values2);

	delete[] values2;

	int* values3 =new int [11] {100,101,102,103,104,105,106,107,108,109,110};

	print_array(cout, values3, 11);

	delete[] values3;

	int* values4 = new int [20] {100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119};

	print_array(cout, values4, 20);

	delete[] values4;

	cout << "1. vector: " << endl;
	vector<int> vector10(10);
	int sz=100;
	for(int i=0; i<vector10.size();++i)
	{
		vector10[i]=(sz++);
	}
	print_vector(cout, vector10);




	cout << "2. vector: " << endl;
	vector<int> vector11(11);
	sz=100;
	for(int i=0; i<vector11.size();++i)
	{
		vector11[i]=(sz++);
	}
	print_vector(cout, vector11);




	cout << "3. vector: " << endl;
	vector<int> vector20(20);
	sz=100;
	for(int i=0; i<vector20.size();++i)
	{
		vector20[i]=(sz++);
	}
	print_vector(cout, vector20);



	
	return 0;
}