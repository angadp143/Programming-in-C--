#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //File ko open karna
    ofstream fout;
    fout.open("zoom.txt"); //create kar dega aur fir open kar dega
    //write kar sakta hu
    fout<<"Hello India";
    fout.close(); //Resource release karwa paun 
}
