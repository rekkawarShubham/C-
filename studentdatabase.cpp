#include <iostream>
#include <string.h>
using namespace std;

class student;

class college
{
    char cname[20];
public:
     college()
     {
        strcpy(cname,"Pict");
     }

     friend class student;
};

class student
{
    char name[20],bg[10],addr[20],dob[10];
    int roll;

public:
    student()
    {
        roll=0;
        strcpy(name,"abc");
        strcpy(bg,"o+");
        strcpy(addr,"pune");
        strcpy(dob,"13/5/1998");

    }

  student(student *s)
    {
        roll=s->roll;
        strcpy(name,s->name);
        strcpy(bg,s->bg);
        strcpy(addr,s-> addr);
        strcpy(dob,s->dob);
    }

 inline void display();

 void getdata()
 {
    cout<<"\nEnter roll name bg addr dob";
    cin>>roll>>name>>bg>>addr>>dob;
 }

 static int stdno;
 static void count()
 {
    cout<<"\n number of student :"<<stdno;
}

~student()
{
    cout<<"\n"<<this->name<<"is destroyed";
}

};

void student:: display()
{
    
    cout<<"\n\t"<<this->roll<<"\t"<<this->name<<"\t"<<this->bg<<"\t"<<this->addr<<"\t"<<this->dob;
}
int student::stdno;


int main()
{
     int n,i;
    student s1,*ptr[5];
   /* s1.display();
    s1.getdata();
    s1.display();
    //========================
    
    student s2(&s1);
    cout<<"\n\tRoll\tName\tBg\tAddress\tDOB\t\n";
    s2.display();
*/
    cout<<"\n how many object do u want";
    cin>>n;

    for(i=0;i<n;i++)
    {
        ptr[i]= new student();
        ptr[i]->getdata();
       student::stdno++;
    }

   cout<<"\n\tRoll\tName\tBg\tAddress\tDOB\t\n";
    for(i=0;i<n;i++)
    {
        ptr[i]->display();

    }

   cout<<"\n Total no of students are:";
   student::count();

   for(i=0;i<n;i++)
   {
    cout<<"\nDeleted No."<<i+1<<"student";
    delete(ptr[i]);
   }
    return 0;
}