#include <iostream>
#include <cstring>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS


class str_type
{
private:
	char string[80];
public:
	str_type(const char* str = "") { strcpy(string, str); }
	~str_type() { delete[] string; }
	str_type operator+(str_type ob); 
	str_type operator=(str_type ob); 
	void show_str() { cout << string << endl; }
	str_type operator+(char* str);
	str_type operator=(char* str);

};


str_type str_type::operator=(char* str)
{
	str_type temp;
	strcpy(string, str);
	strcpy(temp.string, string);
	return temp;
}

str_type str_type::operator=(char* str)
{
	str_type temp;
	strcpy(string, str);
	strcpy(temp.string, string);
	return temp;
}


str_type str_type::operator=(char* str)
{
	str_type temp;
	strcpy(temp.string, str);
	strcat(temp.string, str);
	return temp;
}


str_type str_type::operator+(str_type ob)
{
	str_type temp;
	strcpy(temp.string, string);
	strcat(temp.string, ob.string);
	return temp;
}

str_type str_type::operator=(str_type ob)
{
	strcpy(string, ob.string+1);
	return *this;
}

int main()
{
	str_type à(" aaaa "), b("bbbb"), ñ;
	ñ = à + b;
	ñ.show_str();
	cout << "\n";
	à = " Hello everyone ";
	à.show_str();s
	cout << "\n";
	b = ñ = "C++ is the best ";
	ñ =à + " " + b;
	return 0;
}
