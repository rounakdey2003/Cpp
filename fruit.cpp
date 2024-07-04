#include<iostream>
#include<string.h>
#define Max 10
using namespace std;

class fruit
{
    public:
    char name[10];
    int price;
    void input();
    void output();
    friend void info(fruit, int);
};
void fruit::input()
{
    cin>>name;
    cout<<"\tPrice of the fruit: ";
    cin>>price;
    cout<<"\n";
}
void fruit::output()
{
    cout<<name<<"'\n";
    cout<<"\tPrice of the fruit is "<<price<<" rupees"<<"\n";
}

void info(fruit, int) {

}

void info(fruit f[5], int n, fruit tmp)
{
    int i , max =0;
    for(i=0;i<n;i++)
    {
	if(f[i].price>max)
	{
	    tmp.price = f[i].price;
	    strcpy(tmp.name,f[i].name);
	    max = f[i].price;
	}
    }
    cout<<"Name> "<<tmp.name<<",\t"<<"Price> "<<tmp.price<<"\n";
}
int main()
{
    fruit f[Max],tmp{};
    int n;
    cout<<"\tEnter total number of fruits: ";
    cin>>n;
    cout<<"\n\tMention the names of the fruit below"<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n\tName of the "<<i+1<<" fruit: ";
        f[i].input();
    }
    cout<<"\n\tBelow shows the data you have entered"<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n\tName of the "<<i+1<<" fruit is '";
        f[i].output();
    }
    cout<<"\n\n\tFruit with max profit: ";
    info(f,n,tmp);
}
