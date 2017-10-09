#include<iostream>
using namespace std;

template<class t>
void sort(t a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int k=i;
		for(j=i+1;j<n;j++)
		{
			if(a[k]>a[j])
				k=j;
		}
		if(i!=k)
		{
			t temp=a[k];
			a[k]=a[i];
			a[i]=temp;
		}
	}
}

int main()
{
	int a[5],n1,i;
	float b[5],n2;
	
	cout<<"Enter no. of integer elements"<<endl;
	cin>>n1;
	cout<<"Enter integer elements"<<endl;
	for(i=0;i<n1;i++)
		cin>>a[i];
		
	cout<<"Enter no. of float elements"<<endl;
	cin>>n2;
	cout<<"Enter float elements"<<endl;
	for(i=0;i<n2;i++)
		cin>>b[i];
		
	sort(a,n1);
	cout<<"sorted integer elements are"<<endl;
	for(i=0;i<n1;i++)
		cout<<a[i]<<"\t";
	cout<<endl;
		
	sort(b,n2);
	cout<<"sorted float elements are"<<endl;
	for(i=0;i<n2;i++)
		cout<<b[i]<<"\t";
		
	return 0;
}
			
	

