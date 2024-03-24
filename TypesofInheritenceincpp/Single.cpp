#include<iostream>
using namespace std;
class human
{
    protected:
    string name;
    int age;
    public:
    void work()
    {
        cout<<"I am working\n";
    }
};
class student: public human
{
    int roll_number,fees;
    public:
    student(string name,int age,int roll_number,int fees)
    {
        this->name=name;
        this->age=age;
        this->roll_number=roll_number;
        this->fees=fees;
    }
    void show()
    {
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
    }
};
int main()
{
    student a1("Angad",22,45,100);
    a1.show();
}