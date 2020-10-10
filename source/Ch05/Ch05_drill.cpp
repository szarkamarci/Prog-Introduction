#include "std_lib_facilities.h"
int main()
try {
 

 //1. task
//Cout << "Success!\n"; wrong command "Cout" ==> "cout"

cout << "1.Success!\n";

//2.task
//cout << "Success!\n; there is no '"'

cout << "2.Success!\n";

//3.task
//cout << "Success" << !\n" is missing '"' and ';'

cout << "3.Success" << "!\n";


//4.task
//cout << success << '\n'; is missing 2 '"' and the "S" letter is written little and missing "!"

cout << "4.Success!" << '\n';

//5.task
//string res = 7; wrong declaration "string" instead of "int"
// vector<int> v(10);
// v[5] = res;
// cout << "Success!\n";

int res = 7;
vector<int> v5(10);
v5[5] = res;
cout << "5.Success!\n";

//6. task
//vector<int> v(10);
// v(5) = 7; "[]" instead of "()"
// if (v(5)!=7) "[]" instead of "()" and logical error "==" instead of "!="
// cout << "Success!\n";

vector<int> v6(10);
 v6[5] = 7;
 if (v6[5]==7) cout << "6.Success!\n";

 //7.task
 //error: ‘cond’ was not declared in this scope
 //if (cond) cout << "Success!\n"; add "bool cond =true "
 // else cout << "Fail!\n";

bool cond = true;
 if (cond) cout << "7.Success!\n";
 else cout << "Fail!\n";

 //8. task
 //logical error
 //bool c = false; "true" instead of "false"
 // if (c) cout << "Success!\n";
 // else cout << "Fail!\n";

 bool c = true;
  if (c) cout << "8.Success!\n";
   else cout << "Fail!\n";

 //9.task
  //logical error
 //string s = "ape";
 // boo c = "fool"<s;
 // if (c) cout << "Success!\n";

   string s = "ape";
    bool c2 = "fool"<s;
     if (!c2) cout << "9.Success!\n";

//10.task
//logical error
//string s = "ape";
// if (s=="fool") cout << "Success!\n"; "!=" instead of "=="

string s3 = "ape";
 if (s3!="fool")
 cout << "10.Success!\n";

//11.task
//string s = "ape";
// if (s=="fool") cout < "Success!\n"; missing "<"  and "!=" instead of "=="

string s4 = "ape";
 if (s4!="fool") cout <<"11.Success!\n";


//12.task
 //string s = "ape";
 // if (s+"fool") cout < "Success!\n"; missing "<" and "!=" instead of "+"

 string s5 = "ape";
  if (s5 != "fool") cout << "12.Success!\n";

  //13. task
  //infinite loop
  //vector<char> v(5);
   //for (int i=0; 0<v.size(); ++i) ; "size_t"isntead of "int"
   // cout << "Success!\n";

 vector<char> v13(5);
 for (size_t i=0; i<v13.size();++i);
 cout << "13.Success!\n";

//14.task
//vector<char> v(5);
// for (int i=0;i<=v.size(); ++i) ; "size_t"
// cout << "Success!\n";

vector<char> v14(5);
 for (size_t i=0; i<=v14.size(); ++i) ;
  cout << "14.Success!\n";

//15.task
//logical error
//string s = "Success!\n";
// for (int i=0; i<6; ++i) cout << s[i];  "size_t" instead of "s15.size()" "12" instead if "6"

string s15 = "15.Success!\n";
 for (size_t i=0; i<s15.size(); ++i) cout << s15[i];

//16.task
//if (true) then cout << "Success!\n"; no need for "then"
// else cout << "Fail!\n";

 	if (true)cout << "16.Success!\n";
 	 else cout << "Fail!\n";

//17.task
 //logical error
//int x = 2000;
// char c = x;  "int" instead of "char"
// if (c==2000) cout << "Success!\n";

int x17 = 2000;
 int c17 = x17;
  if (c17==2000) cout << "17.Success!\n";


//18.task
  //logical error
// string s = "Success!\n";
// for (int i=0; i<10; ++i) cout << s[i]; "size_t" isntead of "int" and "s18.size()" isntead of "10"

   string s18 = "18.Success!\n";
    for (size_t i=0; i<s18.size(); ++i) cout << s18[i];

 //19.task
 //vector v(5); missing "<int>"
 // for (int i=0; i<=v.size(); ++i) ; "size_t" instead if "int"
 // cout << "Success!\n";

   vector <int>v19(5);
    for (size_t i=0; i<=v19.size(); ++i) ; cout << "19.Success!\n";


//20.task
//logical error
//int i=0;
// int j = 9;
// while (i<10) ++j; "++i" instead if "++j"
// if (j<i) cout << "Success!\n";

int i=0;
int j = 9;
 while (i<10) ++i;
  if (j<i) cout << "20.Success!\n";

 //21.task
 //int x = 2;
 // double d = 5/(x–2); 0 not legal divison and "+" instead of "-"
 // if (d==2*x+0.5) cout << "Success!\n"; 

 double x21 = 2;
 double d21 = 5/(x21+2);
  if (d21==2*x21+0.5) cout << "21.Success!\n";

  //22.task
  //string<char> s = "Success!\n";
  // for (int i=0; i<=10; ++i) cout << s[i]; 

  string s22 = "22.Success!\n";
   for (size_t i=0; i<s22.size(); ++i) cout << s22[i];


 //23.task
 //int i=0; "j" is not declared
 // while (i<10) ++j; "i" instead of "j"
 // if (j<i) cout << "Success!\n";

 int i23=0;
 int j23=0;
  while (i23<10) ++i23;
  if (j23<i23) cout << "23.Success!\n";


 //24.task
 //int x = 4
 // double d = 5/(x–2);
 // if (d=2*x+0.5) cout << "Success!\n";


int x24 = 4;
 double d24 = 5/(x24-2);
  if (d24=x24/2.0+0.5) cout << "24.Success!\n";


 //25.task
 //cin << "Success!\n"; "cout" isntead of "cin"

  cout<< "25.Success!\n"

 keep_window_open();
 return 0;
}
catch (exception& e) {
 cerr << "error: " << e.what() << '\n';
 keep_window_open();
 return 1;
}
catch (...) {
 cerr << "Oops: unknown exception!\n";
 keep_window_open();
 return 2;
}