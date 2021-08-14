//4

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

	int setClock(unsigned int seconds);

	void setHours(unsigned hours);

	void setMinutes(unsigned minutes); 
	void setSeconds(unsigned seconds);

	unsigned getHours();
	unsigned getMinutes();
	unsigned getSeconds();

	void tick(); // increments the time by one second
	void addClock(Clock ob1);
	void tickDown(Clock ob); // decrements the time by one second
	Clock subtractClock(Clock ob);
};

Clock::Clock()
{	
		m_hours = 12;
		m_minutes = 0;
		m_seconds = 0;
}


Clock::Clock(unsigned hours, unsigned minutes, unsigned seconds)
{
	if (m_hours < 24 && m_minutes < 60 && m_seconds < 60) {
		m_hours = hours;
		m_minutes = minutes;
		m_seconds = seconds;
	}
	else
	{
		m_hours = m_minutes = m_seconds = 0, cerr << " Incorrect data " << endl;
	}
}

Clock::Clock(int valueOfTimeInSeconds)
{	
	m_hours = valueOfTimeInSeconds / 3600;
	m_minutes = valueOfTimeInSeconds % 3600 / 60;
	m_seconds = valueOfTimeInSeconds / 60;
}

int Clock::setClock(unsigned int seconds)
{
	m_hours = seconds / 3600;
	m_minutes = seconds % 3600 / 60;
	m_seconds = seconds / 60;
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
	if (m_hours < 24) {
		m_hours = hours;
	}
	else
	{
		cout << " Incorrect data! " << endl;
		m_hours = 0;
	}

}

void Clock::setMinutes(unsigned minutes)
{
	if (m_minutes < 60) {
		m_minutes = minutes;
	}
	else
	{
		cout << " Incorrect data! " << endl;
		m_minutes = 0;
	}
}

void Clock::setSeconds(unsigned seconds)
{
	if (m_seconds < 60) {
		m_seconds = seconds;
	}
	else
	{
		cout << " Incorrect data! " << endl;
		m_seconds = 0;
	}
}

void Clock::tick()
{
	m_seconds++;
}

void Clock::addClock(Clock ob1)
{
	//??????
}

void Clock::tickDown(Clock ob)
{
	ob.m_seconds--;
}


Clock Clock::subtractClock(Clock ob)
{
	unsigned difhour, difmin, difsec;
	difhour = this->getHours() - ob.getHours();
	difmin = this->getMinutes() - ob.getMinutes();
	difsec = this->getSeconds() - ob.getMinutes();
	return; // ???????????
}


int main() {
	cout << 



	

	return 0;
}





