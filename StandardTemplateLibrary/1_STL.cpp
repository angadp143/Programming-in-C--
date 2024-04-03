#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>v1(5,1);
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;
    v[1]=5;
    cout<<"size of v1:"<<v1.size()<<endl;
    cout<<"capacity of v1:"<<v1.capacity()<<endl;
    v1.push_back(8);
    cout<<"size of v1:"<<v1.size()<<endl;
    cout<<"capacity of v1:"<<v1.capacity()<<endl;
    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(43);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(49);
    vnew.pop_back();
    cout<<"size of vnew:"<<vnew.size()<<endl;
    cout<<"capacity of vnew:"<<vnew.capacity()<<endl;
    vnew.erase(vnew.begin()+1);
    cout<<"size of vnew:"<<vnew.size()<<endl;
    cout<<"capacity of vnew:"<<vnew.capacity()<<endl;
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<endl<<" ";
}