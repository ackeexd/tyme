using namespace std;
#include <Windows.h>
#include <iostream>
#pragma once

class Time
{
private:

	unsigned int seconds;
	unsigned int minutes;
	unsigned int hours;

public:
	Time();
	Time(unsigned int h, unsigned int m, unsigned int s);
	void SetSeconds(unsigned int s);
	void SetMinutes(unsigned int m);
	void SetHours(unsigned int h);
	unsigned int GetSeconds();
	unsigned int GetMinutes();
	unsigned int GetHours();
	void PrintTime() const;
	friend Time operator + (const Time& one, unsigned int s);
	friend Time operator > (const Time& one, const Time& two);
	friend Time operator < (const Time& one, const Time& two);
	friend Time operator == (const Time& one, const Time& two);
	friend Time operator != (const Time& one, const Time& two);
	friend istream& operator >> (istream& is, Time& org);
	friend ostream& operator << (ostream& os, const Time& original);
};