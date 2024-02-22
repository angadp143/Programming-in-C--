#include<iostream>
using namespace std;
class student
{
    public:
    string name,grade;
    int age,roll_no;
};
int main()
{
    student s1,s2;
    s1.name="ranu";
    s1.age=18;
    s1.roll_no=5;
    s1.grade="A+";
    s2.name="ram";
    s2.age=21;
    s2.roll_no=85;
    s2.grade="o";
    cout<<s1.name<<"\t"<<s1.age<<"\t"<<s1.roll_no<<"\t"<<s1.grade<<endl<<s2.name<<"\t"<<s2.age<<"\t"<<s2.roll_no<<"\t"<<s2.grade<<endl;
    return 0;
}