#include<iostream>
using namespace std;
union employee
{
    int eID;
    char favchar;
    float salary;

}e1;
int main()
{
    union employe;
    e1.eID=1;
    e1.favchar='c';
    e1.salary=50000;
    cout<<"The value is "<<e1.eID<<endl;;
    cout<<"The value is "<<e1.favchar<<endl;
    cout<<"The value is "<<e1.salary;
    return 0;
}
//union shivam;
//{
//  int mobileno;
//  float salary;
//  char fav_char;
//}e;
//int main()
//{
//    //union shivam;
//     e.mobileno=9455400781;
//     e.salary=55000;
//     e.fav_char='y';
//     cout<<"The value of this shivam<<e.mobileno<<endl;
//     cout<<"The value of this shivam<<e1.salary<<endl;
//     cout<<"The value of this shivam<<e1.fav_char<<endl;
//
//}
//
