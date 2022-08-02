#include "time.h"

Time::Time() 
{
    SYSTEMTIME st;
    GetSystemTime(&st);
    seconds= st.wSecond;
    minutes = st.wMinute;
    hours = st.wHour;
}
Time::Time(unsigned int h, unsigned int m, unsigned int s)
{
    seconds = s;
    minutes = m;
    hours = h;
}
void Time::SetSeconds(unsigned int s)
{
    seconds = s;
}
void Time::SetMinutes(unsigned int m)
{
    minutes = m;
}
void Time::SetHours(unsigned int h)
{
    hours = h;
}
unsigned int Time::GetSeconds()
{
    return seconds;
}
unsigned int Time::GetMinutes()
{
    return minutes;
}
unsigned int Time::GetHours()
{
    return hours;
}
void Time::PrintTime() const
{
    cout << GetSeconds;
    cout << GetMinutes;
    cout << GetHours;
}
 Time operator + (const Time& one, unsigned int s)
{
    Time res;
    res.seconds = one.seconds + s;
    res.minutes = one.minutes;
    res.hours = one.hours;
    return res;
}
 Time operator > (const Time& one, const Time& two)
 {
     one.seconds + one.minutes + one.hours > two.seconds + two.minutes + two.hours;
 }
 Time operator < (const Time& one, const Time& two)
 {
     one.seconds + one.minutes + one.hours < two.seconds + two.minutes + two.hours;
 }
 Time operator == (const Time& one, const Time& two)
 {
     one.seconds + one.minutes + one.hours == two.seconds + two.minutes + two.hours;
 }
 Time operator != (const Time& one, const Time& two)
 {
     one.seconds + one.minutes + one.hours != two.seconds + two.minutes + two.hours;
 }
 istream& operator >> (istream& is, Time& org)
 {
     cout << "Please, enter value for seconds: ";
     is >> org.seconds;
     cout << "Please, enter value for minutes: ";
     is >> org.minutes;
     cout << "Please, enter value for hours: ";
     is >> org.hours;
     return is;
 }
 ostream& operator << (ostream& os, const Time& org)
 {
     os << org.hours << "/" << org.minutes << "/" << org.seconds << "\n";
     return os;
 }