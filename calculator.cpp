#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int add(int x, int y) {
    int a = x;
    int b =  y;
    return a+b;
}
int sub(int x, int y) {
    int a = x;
    int b =  y;
    return a-b;
}
int multiply(int x, int y) {
    int a = x;
    int b =  y;
    return a*b;
}
int divide(int x, int y) {
    int a = x;
    int b =  y;
    return a/b;
}
int main(){
    int operation,n,m;

    cout<<"choose precisely the operation listed below..."<<endl
    <<"1. addition"<<endl
    <<"2. subtraction"<<endl
    <<"3. multiplication"<<endl
    <<"4. division"<<endl;
    cin>>operation;

    cout<<"Enter first value : ";
    cin>>n;
    cout<<"Enter second value : ";
    cin>>m;

    // if (operation==1){
    //     cout<<"result is : "<<add(n,m);
    // }
    // else if (operation==2){
    //     cout<<"result is : "<<sub(n,m);
    // }
    // else if (operation==3){
    //     cout<<"result is : "<<multiply(n,m);
    // }
    // else if (operation==4){
    //     cout<<"result is : "<<divide(n,m);
    // }
    // else{
    //     cout<<"please enter keyword mentioned in the list";
    // }
    
    int result;
    switch (operation)
    {
    case 1:
        result = add(n,m);
        break;
    case 2:
        result = sub(n,m);
        break;
    case 3:
        result = multiply(n,m);
        break;
    case 4:
        result = divide(n,m);
        break;
    default:
        cout<<"please enter keyword mentioned in the list";
        break;
    }
    cout<<"result is : "<<result;
    return 0;
}