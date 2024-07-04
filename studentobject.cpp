#include<iostream>
using namespace std;

class student{
    int roll, marks;
public:
    void create(int r, int m){
        roll = r;
        marks = m;
    }
    void display(void){
        cout<<"Roll number: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    int r,m,i,arr = 3;
    student *stu = new student[arr];
    student *stugar = stu;
    for(i=0;i<arr;i++){
        cout<<"Enter Roll and Marks of "<<i+1<<" Student"<<endl;
        cout<<"\nRoll: ";
        cin>>r;
        cout<<"Marks: ";
        cin>>m;
        cout<<endl;
        stu->create(r, m);
        stu++;
    }
    for(i=0;i<arr;i++){
        cout<<"\nStudent No."<<i+1<<endl;
        stugar->display();
        stugar++;
    }
    return 0;
}