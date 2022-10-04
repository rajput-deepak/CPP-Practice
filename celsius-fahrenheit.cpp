#include<iostream>
#include<cmath>
using namespace std;

float F_C(int f){
    float temp = f;
    float temp_c = (temp - 32)*5/9;
    return round(temp_c);
}

float C_F(int c){
    float temp = c;
    float temp_f = (temp*9/5)+32;
    return round(temp_f);
}

int main(){
    char value;
    cout<<"===================== choose your requirement ====================="<<endl;
    cout<<"a. Celsious to Fahrenheit"<<endl<<"b. Fahrenheit to Celsious"<<endl;
    cout<<"==================================================================="<<endl;
    cout<<"Enter your choice : ";
    cin>>value;
    cout<<endl;

    if (value == 'a'){
        int temp;
        cout<<"===================== Celsious to Fahrenheit ======================"<<endl;
        cout<<"Enter the temperature in celsious : ";
        cin>>temp;
        cout<<"Temperature is "<<C_F(temp)<< " degree fahrenheit"<<endl;
    }
    else if (value == 'b'){
        int temp;
        cout<<"===================== Fahrenheit to Celsious ======================"<<endl;
        cout<<"Enter the temperature in Fahrenhrit : ";
        cin>>temp;
        cout<<"Temperature is "<<F_C(temp)<< " degree celsius"<<endl;
    }
    else {
        cout<<"You entered wrong keyword please choose from the list given above"<<endl;
    }
    cout<<"==================================================================="<<endl;
    cout<<"NOTE: Here the results of temprature is in round of valuea"<<endl;
    cout<<"==================================================================="<<endl;
}