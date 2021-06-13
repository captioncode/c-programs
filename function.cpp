#include<iostream>
using namespace std;
int sum(int a,int b);
int main()
{
    int x,y;
    cout<<"Enter Two number x and y"<<endl;
    cin>>x>>y;
    sum(x,y);
    return 0;
}

int sum(int a,int b)
{

    cout<<"Sum of x and y is "<<a+b;

}

