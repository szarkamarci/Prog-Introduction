#include "../../std_lib_facilities.h"

int ga[10]={1,2,4,8,16,32,64,128,256,521};

void f(int a[], int n)
{
	int la[10];
	for(int i = 0; i<10; ++i) la[i]=a[i];

	int* p = new int[n];
	
	for(int i = 0; i <n; ++i) p[i]=a[i];

	cout<<"Free store array elements:\n";	
	
	for(int i = 0; i < n; ++i)
		cout<< p[i] << ' ';

	cout<<'\n';

	delete[] p;
}

int fac(int n) { return n > 1 ? n*fac(n-1) : 1; }

int main()
try{

	
	cout<< "'ga' elements: \n";
	f(ga, 10);

	int aa[10] = {};

	for(int i = 0; i< 10; ++i)
	{
		aa[i] = fac(i+1);
	}
	cout<< "'aa' elements: \n";
	f(aa,10);




	
	return 0;
}
catch(exception& e)
{
	cerr<<"Exception: " << e.what()<< '\n';
	return 1;
}
catch(...)
{
	cerr<< "Unknown exception\n";
	return 2; 
}