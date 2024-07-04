#include<iostream>
using namespace std;

class square{
public:
    int side;
    void createsq(void){
        cout<<"\nEnter the side of the square: ";
        cin>>side;
    }
    void displaysq(void){

        cout<<"\nArea of Square: "<<(side*side);
    }
};
class rectangle{
public:
    int len,bre;
    void createrec(void){
        cout<<"\nEnter the length: ";
        cin>>len;
        cout<<"\nEnter the breadth: ";
        cin>>bre;
    }
    void displayrec(void){
        cout<<"\nArea of Rectangle: "<<(len*bre);
    }
};
int main(){
    cout<<"\n\n--------------------------------------"<<endl;
    cout<<"\n\tSquare"<<endl;
    square sq;
    sq.createsq();
    sq.displaysq();
    cout<<"\n\n\n-----------------------------------"<<endl;
    cout<<"\n\tRectangle"<<endl;
    rectangle rec;
    rec.createrec();
    rec.displayrec();
    return 0;
}