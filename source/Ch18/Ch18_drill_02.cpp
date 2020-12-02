#include "../../std_lib_facilities.h"

vector <int> gv{1,2,4,8,16,32,64,128,256,512};

void f(vector<int> v)
{
	vector<int> lv(10);
	lv=v;

	for(int i = 0; i < v.size();++i)
		cout << lv[i]<<' ';
	cout<< endl;

	vector<int> lv2=v;
	
	for(int i = 0; i < v.size();++i)
		cout << lv2[i] <<' ';
	cout<< endl;
}

int fac(int n) { return n > 1 ? n*fac(n-1) : 1; }

int main()
try{

	cout<< "'gv' vector elements:\n";

	f(gv);

	vector<int>vv(10);

	for(int i = 0; i< vv.size();++i)
		{
			vv[i]=fac(i+1);
		}
	cout<< "'vv' vector elements:\n";
	f(vv);

	
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