#include<iostream>
using namespace std;
int main()
{

    int a=4;
     int*b;
       b=&a;
    cout<<"a is"<<a<<endl;
    cout<<"b is"<<*b<<endl;
    cout<<"a is"<<&a<<endl;
    cout<<"b is"<<&b<<endl;
    return 0;

}
