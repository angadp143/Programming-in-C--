#include <iostream>
using namespace std;
void fun3(int n)
{
    cout << n << "days left for birthday\n";
}
void fun2(int n)
{
    cout << n << "days left for birthday\n";
}
void fun1(int n)
{
    cout << n << "days left for birthday\n";
}
void fun0(int n)
{
    cout << "happy birthday\n";
}
int main()
{
    int n = 3;
    /*for(int i=n;i>0;i--)
    {
        cout<<i<<"days left for birthday\n";
    }
    cout<<"happy birthday\n";*/
    fun3(3);
    fun2(2);
    fun1(1);
    fun0(0);
}