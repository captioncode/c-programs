//#include<iostream >
//using namespace std;
//int sum(int*,int*);
//int main()
//{
//    int a=5,b=9;
//    cout<<sum(&a,&b);
//}
//sum(int *p,int*q)
//{
//    return (*p+*q);
//}
//call by reference;
#include<iostream>
using namespace std;
int sum(int &x,int &y);

int main()
{
    int a=5,b=7;
    int s=sum(a,b);
    cout<<"Sum is "<<s;

}
int sum(int &x,int &y)
{
    return (x+y);
}
