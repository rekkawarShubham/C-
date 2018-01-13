#include<iostream>
#include<cstring>
using namespace std;

class loan
{
	int age, vehicle;
	float income;
	char city[10];
	int flag;
	public:
	loan()
	{
		flag=1;
	}
	void get_income();
	void get_age();
	void get_city();
	void get_vehicle();
	void getloan();
};

void loan::get_age()	
{
	try
	{
		cout<<"Enter your age\n";
		cin>>age;
		if(age<18 || age>55)
			throw 1;
		else
			cout<<"Age: "<<age<<endl;
	}
	catch(int a)
	{
		cout<<"Invalid entry of age\n";
		flag=0;
	}
}
void loan::get_income()
{
	try
	{
		cout<<"Enter your income\n";
		cin>>income;
		if(income<50000 || income>100000)
			throw 2;
		else
			cout<<"Income: "<<income<<endl;
	}
	catch(int b)
	{
		cout<<"Invalid income criteria\n";
		flag=0;
	}
}

void loan::get_city()
{	
	try
	{
		cout<<"Enter city you belong to\n";
		cin>>city;
		if(!strcmp(city,"pune") || !strcmp(city,"mumbai") || !strcmp(city,"chennai") || !strcmp(city,"banglore"))
			cout<<"City: "<<city<<endl;
		else
			throw 3;
	}
	catch(int c)
	{
		cout<<"Invalid city criteria\n";
		flag=0;
	}
}

void loan::get_vehicle()
{	
	try
	{
		cout<<"Enter the type of vehicle you have ? wheeler\n";
		cin>>vehicle;
		if(vehicle==4 )
			cout<<"Type of vehicle: "<<vehicle<<"-wheeler"<<endl;
		else
			throw 100;
	}
	catch(int d)
	{
		cout<<"Vehicle must b 4-wheeler\n";
		flag=0;
	}
}
	
void loan::getloan()
{
	if(flag==0)
		cout<<"NO LOAN";
	else
		cout<<"LOAN WILL B GRANTED";	
}

int main()
{
	loan l;
	l.get_city();
	l.get_income();
	l.get_age();
	l.get_vehicle();
	l.getloan();
	return 0;
}	
	

