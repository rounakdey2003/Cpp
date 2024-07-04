#include<iostream>
using namespace std;

class rec 
{
    
    public: 
        int l, b, a;
        
    void in()
    {
    cout << "Enter lenght: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;
    }
        
    void area()
    {
        a=l*b;
    }
    
    void out()
    {
        cout << "Area = " << a;
    }
     
};

int main()
{
    rec areas;
    areas.in();
    areas.area();
    areas.out();
    
    return 0;
}