#include "iostream"
using namespace std;

class student{
public:
    student(){
        cout<<"Constructor created!!"<<endl;
    }
    ~student(){
        cout<<"Destructor !!"<<endl;
    }
};
int main(){
    student *stu = new student[2];
    delete [] stu;
    return 0;
}