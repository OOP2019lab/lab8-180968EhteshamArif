#include"Date.h"
using namespace std;
//overloaded construtor
Date::Date(int d,int m,int y)
{
	if(d>0&&d<=30)
	{
		day=d;
	}
	else
	{
		day=1;
	}
	if(m>0&&m<=12)
	{
		month=m;
	}
	else
	{
		month=1;
	}
	if(year>0&&year<=9999)
	{
		year=y;
	}
	else
	{
		year=2000;
	}
}
//default constructor
Date::Date()
{
	day=1;
	month=1;
	year=2000;
}
//function to check if two dates are equal
bool Date::operator==(Date&a)
{
	if(month==a.month&&year==a.year&&day==a.day)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//function to add some number in day
Date& Date::operator+(int a)
{
	this->day+a;
	return *this;
}
//pre decrement
Date& Date::operator--()
{
	--day;
	return *this;
}
//post decrement
Date& Date::operator--(int)
{
	Date *d=new Date();
	d->day=this->day;
	d->month=this->month;
	d->year=this->year;
	--(this->day);
	return *d;
}
//function to get specific values
int& Date::operator[](int a)
{
	if(a!=0&&a!=1&&a!=2)
	{
		cout<<"The value of a cannot be other then 0 , 1 and 2"<<endl;
	}
	else
	{
	   if(a==0)
	   {
		   return this->day;
	   }
	   if(a==1)
	   {
		   return this->month;
	   }
	   if(a==2)
	   {
		   return this->year;
	   }
	}
}
