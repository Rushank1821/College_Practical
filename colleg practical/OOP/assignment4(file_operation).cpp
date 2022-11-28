#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    string srt;
    ofstream out;
    out.open("model.txt");
    cout<<"Enter the content for the file :"<<endl;
    getline(cin,str);
    out<<str;
    out.close();

    ifstream in;
    in.open("model.txt");
    while(in.eof==0)
    {
        getline(in,str);
        cout<<str<<endl;
    }
    in.close();
    return 0;
}