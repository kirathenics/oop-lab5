#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
public:
	Time();
	Time(int, int);
	Time(const Time&);
	~Time();

	void setMinutes(int);
	int getMinutes();
	void setSeconds(int);
	int getSeconds();

	Time& operator=(const Time&);
	Time& operator+=(const Time&);

	friend ostream& operator<< (ostream&, const Time&);
	friend istream& operator>> (istream&, Time&);

private:
	int minutes, seconds;
};

Time::Time() : minutes(0), seconds(0) {}

Time::Time(int minutes, int seconds) : minutes(minutes), seconds(seconds) {}

Time::Time(const Time& object)
{
	this->minutes = object.minutes;
	this->seconds = object.seconds;
}

Time::~Time() {}

void Time::setMinutes(int minutes)
{
	this->minutes = minutes;
}

int Time::getMinutes()
{
	return this->minutes;
}

void Time::setSeconds(int seconds)
{
	this->seconds = seconds;
}

int Time::getSeconds()
{
	return this->seconds;
}

Time& Time::operator=(const Time& object)
{
	if (this != &object)
	{
		this->minutes = object.minutes;
		this->seconds = object.seconds;
	}
	return *this;
}

Time& Time::operator+=(const Time& object)
{
	this->seconds += object.seconds;
	int additionalMinutes = 0;
	while (this->seconds >= 60)
	{
		this->seconds -= 60;
		additionalMinutes++;
	}
	this->minutes += object.minutes;
	this->minutes += additionalMinutes;
	return *this;
}

ostream& operator<<(ostream& out, const Time& object)
{
	out << "¬рем€: " << object.minutes << ":" << setw(2) << setfill('0') << object.seconds;
	return out;
}

istream& operator>>(istream& in, Time& object)
{
	cout << "¬ведите минуты: ";
	in >> object.minutes;
	cout << "¬ведите секунды: ";
	in >> object.seconds;
	return in;
}

