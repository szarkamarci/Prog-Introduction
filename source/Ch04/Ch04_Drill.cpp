#include "std_lib_facilities.h"
using namespace std;

int main()
{

vector<int>temps;
int temp=0;
int N;
char st;


while(temps.size()<N)
{

cout<< "Give me a number:" << endl;	
cin >> temp;
temps.push_back(temp);

cout<< "If you want to stop the program type '|': " << endl;
cin >> st;

if(st == '|')
{
	break;
}

}

sort(temps);

for(int i = 0;i<temps.size();i++)
{
	if(temps[i]-temps[i+1]== 0)
	{
		cout<< "Equal" << endl;
	}
	else
	{
	cout<<temps[i]<< endl;
    }
}



return 0;
}
