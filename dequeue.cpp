#in3clude<iostream>
#include<deque>

using namespace std;

int main()
 {
   deque <int> d;
   deque <int>::iterator i;
   int x,ch;
   char ans;

   do
    {
     cout<<"\n\n\t\t\t-------<< MENU >>-------";
     cout<<"\n\t\t\t1.Push Element at Front";
     cout<<"\n\t\t\t2.Push Element at Rear";
     cout<<"\n\t\t\t3.Pop Element from Front";
     cout<<"\n\t\t\t4.Pop Element from Rear";
     cout<<"\n\t\t\t5.Exit";
     cout<<"\n\t\t\t------------------------";
     cout<<"\n\nEnter your choice : ";
     cin>>ch;
     switch(ch)
             {
              case 1 :
                             cout<<"\nEnter The Element : ";
                             cin>>x;
                             d.push_front(x);
                             cout<<"The elements of the dequeue are : ";
                             for(i=d.begin() ; i!=d.end() ; i++)
                              {
                                cout<<*i<<" ";
                              }
                             break;

              case 2 :
                             cout<<"\nEnter The Element : ";
                             cin>>x;
                             d.push_back(x);
                             cout<<"The elements of the dequeue are : ";
                             for(i=d.begin() ; i!=d.end() ; i++)
                              {
                                cout<<*i<<" ";
                              }
                             break;

              case 3 :
                             cout<<"\n\nElement is poped from front is : "<<d.front();
                             d.pop_front();
                             cout<<"The elements of the dequeue are : ";
                             for(i=d.begin() ; i!=d.end() ; i++)
                              {
                                cout<<*i<<" ";
                              }
                             break;

              case 4 :
                             cout<<"\n\nElement is poped from rear is : "<<d.back();
                             d.pop_back();
                             cout<<"The elements of the dequeue are : ";
                             for(i=d.begin() ; i!=d.end() ; i++)
                              {
                                cout<<*i<<" ";
                              }
                             break;


              case 5 :
                             return 0;
                             break;
       }
      cout<<"\n\nDo you want to continue(Y/N) : ";
      cin>>ans;
    }while(ans=='y'||ans=='Y');
     return 0;

  }
