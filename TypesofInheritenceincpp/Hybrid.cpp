#include<iostream>
using namespace std;
//student
//boy
//girl
//male
//female
class student
{
    public:
    void print()
    {
        cout<<" I am student\n";
    }
};
class male
{
    public:
    void maleprint()
    {
        cout<<"I am male\n";
    }
};
class female
{
    public:
    void femaleprint()
    {
        cout<<"I am female\n";
    }
};

class boy:public student,public male
{
    public:
    void boyprint()
    {
        cout<<" I am boy\n";
    };
};
class girl:public student,public female
{
    public:
    void girlprint()
    {
        cout<<" I am girl\n";
    };
};
int main()
{
    girl g1;
    g1.girlprint();
    boy b1;
    b1.boyprint();
}