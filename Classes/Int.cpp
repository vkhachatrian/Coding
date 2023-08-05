#include <iostream>
using namespace std;

#define size 3


class Int
{
private:
	int x;
public:
	Int() { x = 0; }
	Int(int k) { x = k; }
	Int operator+(Int ob);
	Int operator-(Int ob);
	Int operator=(Int ob);
	Int operator/(Int ob);
	Int operator%(Int ob);
	friend Int operator++(Int &ob);
	friend Int operator++(Int &ob,int i);
	Int operator--();
	Int operator--(int i);
	Int operator+=(Int i);
	Int operator-=(Int i);
	bool operator==(Int ob);
	bool operator>(Int ob);
	bool operator<(Int ob);
	bool operator>=(Int ob);
	bool operator<=(Int ob);
	Int operator()(int a);
	void show();

};

Int Int::operator()(int a)
{
	Int temp;
	temp.x = x + a;
	return temp;
}
Int Int::operator-=(Int i)
{
	x = x - i.x;
	return *this;
}
bool Int::operator==(Int ob)
{
	if (x == ob.x) return true;
	else return false;
}
bool Int::operator>(Int ob)
{
	if (x > ob.x)return true;
	else return false;
}
bool Int::operator<(Int ob)
{
	if (x < ob.x)return true;
	else return false;
}
bool Int::operator>=(Int ob)
{
	if (x >= ob.x)return true;
	else return false;
}
bool Int::operator<=(Int ob)
{
	if (x <= ob.x)return true;
	else return false;
}
Int Int::operator+(Int ob)
{
	Int temp;
	temp.x = x + ob.x;
	return temp;
}
Int Int::operator-(Int ob)
{
	Int temp;
	temp.x = x - ob.x;
	return temp;
}
Int Int::operator=(Int ob)
{
	x = ob.x;
	return *this;
}
Int Int::operator/(Int ob)
{
	Int temp;
	temp.x = x / ob.x;
	return temp;
}
Int Int::operator%(Int ob)
{
	Int temp;
	temp.x = x % ob.x;
	return temp;
}
Int operator++(Int &ob)
{
	//x++;
	//return *this;
	ob.x++;
	return ob;
}
Int operator++(Int &ob,int i)
{
	//Int temp = *this;
	
	//return *this;
	Int temp = ob.x;
	ob.x++;
	return temp;

}
Int Int::operator--()
{
	x--;
	return *this;
}
Int Int::operator--(int i)
{
	Int temp = *this;
	x--;
	return *this;
}
Int Int::operator+=(Int i)
{
	x + i.x;
	return *this;
}
void Int::show()
{
	cout << x;
}







int main()
{
	Int a(10), b(18), c;
	c = b % a;
	c.show();
	
}