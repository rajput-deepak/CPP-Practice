#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream file("info.txt");
    file<<"this text is whitten using c++ code";
    file.close(); 
}