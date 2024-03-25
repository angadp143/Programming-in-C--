#include<iostream>
using namespace std;
class area
{
    public:
    int calculatearea(int r)   //circle
    {
        return 3.14*r*r;
    }
    int calculatearea(int l,int b)  //rectangle
    {
        return l*b;
    }
};
int main()
{
    area a1,a2;
    cout<<a1.calculatearea(4)<<endl;
    cout<<a2.calculatearea(3,4)<<endl;
}