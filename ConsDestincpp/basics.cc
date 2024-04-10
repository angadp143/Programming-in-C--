#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    public:
    student(){
        name="";
        roll=0;
    }
    student(string name,int roll){
        this->name=name;
        this->roll=roll;
    }

    void display(){
        cout<<"The name of student is:"<<name<<endl;
        cout<<"The roll of student is:"<<roll;
    }
};
int main(){
    student s1("Ashish",1);
    s1.display();
    cout<<"\n";
    student s2;
    s2.display();

    return 0;
}