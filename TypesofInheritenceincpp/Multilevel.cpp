#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    public:
    void introduce()
    {
        cout<<"hello my name is:"<<name<<endl;
    }
};
class employee:public person
{
    protected:
    int salary;
    void monthly_salary()
    {
        cout<<"my monthly salary is:"<<salary<<endl;
    }
};
class manager:public employee
{
    public:
    string department;
    manager(string name,int salary,string department)
    {
        this->name=name;
        this->salary=salary;
        this->department=department;
    };
    void work()
    {
        cout<<"I am leading the department "<<department<<endl;
    }
};
int main()
{
    manager a1("Prince",500000,"Sales");
    a1.work();
    a1.introduce();
}