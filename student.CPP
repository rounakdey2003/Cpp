#include <iostream>
#include <string.h>
#define Max 10
using namespace std;

	    class student{
		public:
		int roll;
		char name[50];
		int marks;
		void get_data();
		void display();
        void std_details(student, int);
	    };
void student::get_data()
{
    cout<<"\n\tEnter the roll: ";
    cin>>roll;
    cout<<"\n\tEnter the name: ";
    cin>>name;
    cout<<"\n\tEnter the marks: ";
    cin>>marks;
}
void student :: display()
{
    cout<<"\n\tRoll:"<<roll;
    cout<<"\n\tName:"<<name;
    cout<<"\n\tMarks:"<<marks;
}
void std_details(student s[5], int n, student tmp)
{
    int i , max =0;
    for(i=0;i<n;i++)
    {
	if(s[i].marks>max)
	{
	    tmp.marks = s[i].marks;
	    tmp.roll = s[i].roll;
	    strcpy(tmp.name,s[i].name);
	    max = s[i].marks;
	}
    }
    cout<<"\n\n\tThe details of the student securing max marks:  \n\n";
    cout<<"Roll> "<<tmp.roll<<",\tName> "<<tmp.name<<",\tMarks> "<<tmp.marks<<"\n";
}
int main()
{
    student s[Max],tmp;
    int i,n;
    cout<<"\n\tEnter the number of student: ";
    cin>>n;
    cout<<"\n\n\tEnter the details of the students: ";
    for(i=0;i<n;i++)
    {
	cout<<"\n\n\tDetails of the students "<<i+1<<endl;
	s[i].get_data();
    }
    for(i=0;i<n;i++)
    {
	cout<<"\n\n\tDetails of the students:"<<i+1<<endl;
	s[i].display();
    }
    cout<<endl;
    std_details(s,n,tmp);
    return 0;
}
