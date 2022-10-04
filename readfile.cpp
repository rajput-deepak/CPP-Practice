#include<iostream>
#include<fstream>
using namespace std;

int main() {
    string read;
    ifstream a("info.txt");
    while (getline(a, read));
    {
        cout<<read<<endl;
    }
    a.close();  
}