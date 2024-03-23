#include<iostream>
using namespace std;
class human
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void fun()
    {
        a=11;
        b=20;
        c=21;
    }
};
int main()
{
    human angad;
    angad.c=11;
}