#include <iostream>
#include<string>
#include "clsString.h"
using namespace std;
int main()
{
	clsString string1;
	clsString string2("Your name");
	string1.setvalue("your name");
	cout<<string1.getvalue()<<endl;
}

