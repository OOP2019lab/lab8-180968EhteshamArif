#include<iostream>
#include<string>
using namespace std;
//class Date as required
class Date
{
	friend ostream& operator<<(ostream& os,Date& d)
	{
		string monthNames[13] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		os<<monthNames[d.month];
		//os<<d.month;
		os<<" "<<d.day;
		os<<" "<<d.year;
		return os;
	}

	friend istream& operator>>(istream& is,Date& a)
	{
		is>>a.day;
		if(a.day>30||a.day<0)
		{
			a.day=1;
		}
		is>>a.month;
		if(a.month>30||a.month<0)
		{
			a.month=1;
		}
		is>>a.year;
		if(a.year>9999||a.year<0)
		{
			a.year=2000;
		}
		return is;
	}
private:
	int day,month,year;
public:
	Date(int,int,int);
	Date();
	Date& operator+(int);
	Date& operator--();
	Date& operator--(int);
	bool operator==(Date&);
	int& operator[](int);
	Date& operator=(Date&);
};