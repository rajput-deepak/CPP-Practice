#include<iostream>
#include<string>
using namespace std;

int car(int x){
    int year = x;
    return year;
}
string car(string x){
    string modal = x;
    return modal;
}
int main(){
    int a = car(2016);
    string b = car("x5");
    cout<<"car modal is: "<<b<<"and launched in year: \n"<<a;
    cout<<"this is my program to check the function of endl";
    return 0;
}