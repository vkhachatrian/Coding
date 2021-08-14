#include <iostream>
using namespace std;


class Clock
{
private:
	unsigned m_hours; // range 0-23
	unsigned m_minutes;// range 0-59
	unsigned m_seconds;// range 0 - 59	
public:
	Clock();
	Clock(unsigned int hours, unsigned int minutes, unsigned int seconds);
	Clock(int valueOfTimeSeconds);

	void setClock(unsigned int seconds);

	void setHours(unsigned hours);

	void setMinutes(unsigned minutes); 
	void setSeconds(unsigned seconds);

	unsigned getHours();
	unsigned getMinutes();
	unsigned getSeconds();

	void tick(); // increments the time by one second
	void addClock(Clock ob1);
	void tickDown(); // decrements the time by one second
	Clock subtractClock(Clock ob);
	void printClock();
};
Clock::Clock()
{	
		m_hours = 12;
		m_minutes = 0;
		m_seconds = 0;
}
Clock::Clock(unsigned hours, unsigned minutes, unsigned seconds)
{
	if (hours < 24 && minutes < 60 && seconds < 60) {
		m_hours = hours;
		m_minutes = minutes;
		m_seconds = seconds;
	}
	else
	{
		cout << " Incorrect data! " << endl;
		m_hours = m_minutes = m_seconds = 0;		
	}
}
Clock::Clock(int valueOfTimeInSeconds)
{	
	if(valueOfTimeInSeconds > 23 * 3600 + 59*60 + 59)
		valueOfTimeInSeconds-= 23 * 3600 + 59*60 + 59;
	setClock(valueOfTimeInSeconds);
}
void Clock::setClock(unsigned int seconds)
{
	m_hours = seconds / 3600;
	m_minutes = seconds % 3600 / 60;
	m_seconds = seconds % 3600 % 60;
}
unsigned Clock::getHours() 
{
		return m_hours;
}
unsigned Clock::getMinutes()
{
		return m_minutes;
}
unsigned Clock::getSeconds()
{
		return m_seconds;
}
void Clock::setHours(unsigned hours)
{
	if (hours < 24) {
		m_hours = hours;
	}
	else
	{		
		m_hours = 0;
	}

}
void Clock::setMinutes(unsigned minutes)
{
	if (minutes < 60) {
		m_minutes = minutes;
	}
	else
	{
		m_minutes = 0;
	}
}
void Clock::setSeconds(unsigned seconds)
{
	if (seconds < 60) {
		m_seconds = seconds;
	}
	else
	{
		m_seconds = 0;
	}
}
void Clock::addClock(Clock ob1)
{
	int sec = m_hours * 3600 + m_minutes * 60 + m_seconds;
	int sec2 = ob1.getHours() * 3600 + ob1.getMinutes() * 60 + ob1.getSeconds();
	int sum = sec + sec2;
	setClock(sum);
}
void Clock::tick()
{
	int sec = m_hours * 3600 + m_minutes * 60 + m_seconds;
	sec += 1;
	setClock(sec);
}
void Clock::tickDown()
{
	int sec = m_hours * 3600 + m_minutes * 60 + m_seconds;
	sec -= 1;
	setClock(sec);
}
Clock Clock::subtractClock(Clock ob)
{
	Clock temp;
	 int sec = m_hours * 3600 + m_minutes * 60 + m_seconds;
	 int sec2 = ob.getHours() * 3600 + ob.getMinutes() * 60 + ob.getSeconds();
	 int sub = sec - sec2;
	if (sub < 0)
	{
		sub +=86400 ;
	}
	temp.setClock(sub);
	return temp;
}
void Clock::printClock()
{
	cout << m_hours << " : " << m_minutes << " : " << m_seconds << endl;
}





int main() {
	Clock obj(0,30,43);
	//Clock obj2(2,0,0);
	//Clock obj3;
	//obj3 = obj.subtractClock(obj2);
	//obj3.printClock();
	cout << sizeof(obj);
	return 0;
}
