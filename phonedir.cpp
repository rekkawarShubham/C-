//============================================================================
// Name        : telephone.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;
class tele
{
public:
	char name[30],tel[30];
	void getdata();
	void display();
	char *getname()
	{
		return name;
	}
	char *gettel()
	{
			return tel;
	}

};
void tele::getdata()
{
	cout<<"\nEnter name\n";
	cin>>name;
	cout<<"\nEnter telephone\n";
	cin>>tel;

}
void tele::display()
{
	cout<<"\n name:"<<name;

	cout<<"\n telephone:"<<tel;

}

int main()
{
	char nme[30],telee[30];
	tele rec;
	fstream file;
	file.open("abc.dat",ios::out);
file.clear();
file.close();
int ch;
	do
	{
	cout<<"\n1.Insert\n2.Display\n3.Search by telephone\n4.Search by name\n0.exit";
	cin>>ch;
	switch(ch)
	{
	case 1:

			rec.getdata();
			file.open("abc.dat",ios::app|ios::out);
			file.write((char*)&rec,sizeof(rec));
			file.close();
			break;
	case 2:
			file.open("abc.dat",ios::in);
			file.seekg(0,ios::beg);

			while(file)
			{
			file.read((char*)&rec,sizeof(rec));
			if(!file.eof())
			{
			rec.display();
			}
			}
			file.close();
			break;

	case 3:
			cout<<"\nEnter telephone no\n";
			cin>>telee;
			file.open("abc.dat",ios::in);
			file.seekg(0,ios::beg);
			while(file.read((char*)&rec,sizeof(rec)))
			{
				if(strcmp(rec.gettel(),telee)==0)
				{
					cout<<"\nName:"<<rec.getname();
				}
			}
			file.close();
			break;

	case 4:
			cout<<"\nEnter name\n";
			cin>>nme;
			file.open("abc.dat",ios::in);
			file.seekg(0,ios::beg);
			while(file.read((char*)&rec,sizeof(rec)))
			{
				if(strcmp(rec.getname(),nme)==0)
				{
					cout<<"\ntel:"<<rec.gettel();
				}
			}
			file.close();
			break;
	}
	}while(ch!=0);
	return 0;
}

