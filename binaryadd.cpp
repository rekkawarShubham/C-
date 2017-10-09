#include<iostream>
#include<stack>

using namespace std;

/*------------<< Declaration of function >>-------------*/

stack <int> accept(int no);
stack <int> add(stack <int> &j1 , stack <int> &j2);
void display(stack <int> &j3);

/*--<<Function def.to accept decimal no & convert to binary no>>--*/

stack <int> accept(int no)
 {
  stack <int> s,j;
  int rem;
  while(no!=0)
   {
    rem=no%2;
    s.push(rem);
    no=no/2;
   }
  while(!s.empty())
    {
     cout<<s.top();
     j.push(s.top());
     s.pop();
    }
  return j; 
} 


stack <int> add(stack <int> &j1 , stack <int> &j2)
 {
   stack <int> j3;
   int sum,carry=0,b1,b2;

   while(!j1.empty() || !j2.empty())
    {
      if(!j1.empty())
            b1=j1.top();
      else
            b1=0;
      if(!j2.empty())
          b2=j2.top();
      else
          b2=0;
      sum=(b1+b2+carry)%2;
      j3.push(sum);
      carry=(b1+b2+carry)/2;
      if(!j1.empty())
         j1.pop();
      if(!j2.empty())
         j2.pop();
    }
   if(carry ==1)
      j3.push(1);
   while(!j3.empty())
        {
          cout<<j3.top();
          j3.pop();
        }
   cout<<"\n\n\n";

  return j3;
 }


/*-----<< Function defination to display the addition >>-----*/

void display(stack <int> &j3)
 {
   while(!j3.empty())
        {
          cout<<j3.top();
          j3.pop();
        }
   cout<<"\n\n";
}


int main()
 {
  int a,b;
  stack <int> j1,j2,j3; 
  cout<<"\n\nEnter the 1st number : ";
  cin>>a;
  cout<<"\nNumber "<<a<<" in binary form is : ";
  j1=accept(a);
  cout<<"\n\nEnter the 2nd number : ";
  cin>>b;
  cout<<"\nNumber "<<b<<" in binary form is : ";
  j2=accept(b);
  cout<<"\n\nAddition of Binary number is : ";
  j3=add(j1,j2);
  display(j3);
  return 0;
 }
