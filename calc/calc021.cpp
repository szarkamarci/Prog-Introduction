#include "std_lib_facilities.h"

double expression();

class Token_stream
{
public:
	Token_stream();
	Token get();
	void putback(Token t);
private:
	bool full;
	Token buffer;

};

Token_stream::Token_stream(): full(false), buffer(0) {}

void Token_stream ::putback(Token t)
{
	if(full) error("Token_stream buffer full")
	buffer = t;
	full= true

}

Token Token_stream::get()
{
	if(full)
	{
		full= false;
		return buffer;
	}

	char ch;
	cin >> ch;

switch(ch)
	{
		case'q':
		case';':
		case'(':
		case')':
		case'+':
		case'-':
		case'*':
		case'/':
		//case'%':
			return Token(ch);
		case'.':
		case'0': case '1':case'2': case'3' : 
		case '4': case'5': case'6': case '7': 
		case '8': case'9':
		{
			cin.putback(ch);
			double val =0;
			cin >> val;
			Token('8', val);
		}
		default:
			error("Bad token");	
	}
	return 0;
} 

Token_stream ts;

double primary()
{
	Token t = ts.get();
	switch(t.kind)
	{
		case'(':
		{
			double d = expression();
			t = ts.get();
			if(t.kind!= ')') error("')' expected");
			return d;
		}

		case'8':
			return t.value;
		default:
			error("primary expected");	


	} 
	return t.value;
}

double term()
{
	double left = primary();
	Token t = ts.get();
	while(true)
	{
		switch(t.kind)
		{
			case '*':
				left *= primary();
				t = ts.get();
				break;

			case '/':
			{
				double d = primary();
				if(d == 0) error("divided by zero");
				left /= d;
				t = get_token();
				break;
			}/*
			case'%':
				left%= primary();
				t = get_token();
				break;*/
			default:
			ts.pushback(t);
				return left;
		

		}

	}
	return left;

}

double expression()
{

	double left= term();
	Token t = ts.get();
	while(true)
	{

			switch(t.kind)
			{
				case '+':
					left += term();
					t = ts.get();
					break;
				case '-':
					left -= term();
					t = ts.get();
					break;
				default:
				ts.pushback(t);
					return left;	

			}

	}
}

int main()
try{

while(cin)
{
	Token t = ts.get();
	
		if(t.kind == 'q') break;
		if(t.kind == ';')
			cout<< "=" << val;
		else
			ts.putback(t);
	val = expression();

}


return 0;
}
catch(exception& e)
{
	cerr << e.what() << endl;
	return 1;
}
catch(...)
{
	cerr << "exception\n";
	return 2;
}