#include<iostream>
using namespace std;

class cpparray
{
	int arr[20],n;

	public:

	friend ostream& operator<<(ostream &,cpparray &);
	friend istream& operator>>(istream &,cpparray &);
	void operator=(cpparray &);
	void range()
	{
		int i,j;
		for(i=1;i<n;i++)
		{
			for(j=0;j<n-i;j++)
			{
				if(arr[j]>arr[j+1])
				{
					int temp;
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}


		cout<<"\nThe range is from "<<arr[0]<<" to "<<arr[n-1];

	}
};

void cpparray::operator=(cpparray &a1)

{
	int i;
	n=a1.n;
	for(i=0;i<a1.n ;i++)
	{
		arr[i]=a1.arr[i];

	}
}

istream& operator>>(istream &input ,cpparray &a)
{
	int i;
	cout<<"\nenter the number of elements in the array\t";
	cin>>a.n;
	cout<<"\nEnter the elements";

	for(i=0;i<a.n;i++)
	{
		input>>a.arr[i];
	}
	return (input);
}

ostream& operator<<(ostream &output , cpparray &a)
{
	int i;
	cout<<"\n";

	for(i=0;i<a.n;i++)
	{
		output<<a.arr[i]<<"\t";
	}
	return (output);
}

int main()
{
	cpparray a1,a2,a3,a4;
	int ch;

	cin>>a1;
	cout<<a1;
	cout<<endl;

	cin>>a2;
	cout<<a2;
	cout<<endl;
	do
	{
		cout<<"\nEnter your choice:\n1.COPY of 1st entered Array\n2.COPY of 2nd entered Array\n3.RANGE of 1st Array\n4.RANGE of 2nd Array\n5.EXIT\n";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"copy of array1 is: ";
				a3=a1;
				cout<<a3;
				break;
			case 2: cout<<"copy of array2 is: ";
				a4=a2;
				cout<<a4;
				break;
			case 3: cout<<"range of array1 is: ";
				a1.range();
				break;
			case 4: cout<<"copy of array1 is: ";
				a2.range();
				break;
			case 5: return 0;
			default:cout<<"invalid choice";
				break;
		}
	}while(1);
	return 0;
}
	

