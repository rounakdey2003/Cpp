#include <iostream>
#include <cstring>
#define Max 10

	    class employee{
		public:
		int id;
		char name[50];
		double salary;
		void data();
		void display();
		friend void details(employee, int);

	    };
void employee :: data()
{
    std::cout<<"\nEnter the id: ";
    std::cin>>id;
    std::cout<<"\nEnter the name: ";
    std::cin>>name;
    std::cout<<"\nEnter the salary: ";
    std::cin>>salary;
}
void employee :: display()
{
    std::cout<<"\nID:"<<id;
    std::cout<<"\nName:"<<name;
    std::cout<<"\nSalary:"<<salary;
}

void details(employee, int) {

}

void details(employee s[5], int n, employee tmp)
{
    int i , max =0;
    for(i=0;i<n;i++)
    {
	if(s[i].salary>max)
	{
	    tmp.salary = s[i].salary;
	    tmp.id = s[i].id;
	    strcpy(tmp.name,s[i].name);
	    max = s[i].salary;
	}
    }
    std::cout<<"\n\tDetails of highest payer: \n\t";
    std::cout<<"Id: "<<tmp.id<<"\t"<<"Name: "<<tmp.name<<"\t"<<"Salary: "<<tmp.salary<<"\n";
}
int main()
{
    employee s[Max],tmp{};
    int i,n;

    std::cout<<"\nEnter total employee (10 max): ";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
	std::cout<<"\n\t\t\tEnter the details "<<i+1<<std::endl;
	s[i].data();

    }
    std::cout<<"\n\n\tThe details of employees\n\n ";
    for(i=0;i<n;i++)
    {
	std::cout<<"\n\t\t\tDetails of employee "<<i+1<<std::endl;
	s[i].display();
    }
    std::cout<<std::endl;
    details(s,n,tmp);

	return 0;
}
