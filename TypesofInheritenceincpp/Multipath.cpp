#include<iostream>
using namespace std;
class human
{
    public:
    string name;
};
class engineer: public human
{
    public:
    string specilization;
    void work()
    {
        cout<<" I have specilization in "<<specilization<<endl;
    }
};
class youtuber: public human
{
    public:
    int subscribers;
    void contentcreator()
    {
        cout<<" I have a subscribers base of "<<subscribers<<endl;
    }
};
class codeteacher: public engineer,public youtuber
{
    public:
    int salary;
    codeteacher(int salary,string specilization,int subscribers)
    {
        this->salary=salary;
        this->specilization=specilization;
        this->subscribers=subscribers;
    }
    void showcase()
    {
        cout<<" my salary is "<<salary<<endl;
        work();
        contentcreator();
    }
};
int main()
{
    codeteacher a1(700000,"CSE",500000);
    a1.showcase();
}