#include<iostream>
using namespace std;
int main()
{
    int fibo,f,f1=0,f2=1;
    cout << " Enter range: ";
    cin >> f;
    cout << "\t" << f1 << "\t" << f2;
    fibo=f1+f2;
    for(int i=3;i<=f;i++)
    {
        cout << "\t" << fibo;
        f1=f2;
        f2=fibo;
        fibo=f1+f2;
    }
    return 0;
}