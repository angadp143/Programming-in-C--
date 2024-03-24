#include<iostream>
using namespace std;
class engineer
{
    public:
    string specilization;
    void work()
    {
        cout<<" I have specilization in "<<specilization<<endl;
    }
};
class youtuber
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
    string name;
    codeteacher(string name,string specilization,int subscribers)
    {
        this->name=name;
        this->specilization=specilization;
        this->subscribers=subscribers;
    }
    void showcase()
    {
        cout<<" my name is "<<name<<endl;
        work();
        contentcreator();
    }
};
int main()
{
    codeteacher a1("Sabhya","CSE",500000);
    a1.showcase();
}