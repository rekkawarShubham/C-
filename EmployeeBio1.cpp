#include<iostream>
using namespace std;

class personal
{
	protected:
	string name;
	string ph_no;
	int id;
	
	public:
	void display()
	{
		cout<<"\nName:"<<name<<"\t";
		cout<<"\nID:"<<id<<"\t";
		cout<<"\nPhone Number:"<<ph_no<<"\t";
	}
};

class academics
{
	protected:
	string school;
	float per;
	
	public:
	void display1()
	{
		cout<<"\nSchool Name:"<<school<<"\t";
		cout<<"\nPercentage:"<<per<<"\t";
	}
};

class professional:public personal,public academics
{
	protected:
	string c_name;
	long int salary;
	
	public:
	void display2()
	{
		display();
		display1();
		cout<<"\nCompany Name:"<<c_name<<"\t";
		cout<<"\nSalary:"<<salary<<endl;
	}
	void input();
};

void professional::input()
{
	cin.ignore();
	cout<<"\nEnter Employee name: ";
	getline(cin,name);
	cout<<"\nEnter Employee id: ";
	cin>>id;
	cout<<"\nEnter Phone no.: ";
	cin.ignore();
	getline(cin,ph_no);
	cout<<"\nEnter Employee school name: ";
	getline(cin,school);
	cout<<"\nEnter Employee's percentage of highschool: ";
	cin>>per;
	cin.ignore();
	cout<<"\nEnter Employee's company name: ";
	getline(cin,c_name);
	cout<<"\nEnter Employee's salary: ";
	cin>>salary;
	cout<<endl;
}

int main()
{
	professional p[30];
	int n;
	cout<<"Enter the no. of employees";
	cin>>n;
	for(int i=0;i<n;i++)
		p[i].input();
	cout<<"\t\t\tEMPLOYEE DETAILS\n";

	for(int i=0;i<n;i++)	
		p[i].display2();
	cout<<endl;
	return 0;
}	


