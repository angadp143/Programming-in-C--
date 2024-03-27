#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    // file ko open karo
    fin.open("zoon.txt");
    //fir read karo
    char c;
    fin>>c;
    while(!fin.eof())
    {
        cout<<c;
        c=fin.get();
    };
    fin.close();
}