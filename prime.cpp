#include <iostream>
using namespace std;
int prime(int p)
{
    int i,s=0;
    
    for(i=1;i<=p;i++)
    {
        if(p%i==false)
        s=s+1;
    }
    if(s==2)
        return 1;
    else
        return 0;
}

int main() {
    int low,up,i;
    
    cout << "Enter the lower term: ";
    cin >> low;
    cout<< "Enter the upper term: ";
    cin >> up;
    
    for(i=low;i<=up;i++)
    {
        if(prime(i)==1)
            {
                cout << "\t" << i;
            }
    }

    return 0;
}