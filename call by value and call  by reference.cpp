#include<iostream>
using namespace std;
int swap(int a,int b);

int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    cout<<"The sum is"<<sum(a,b)<<endl;
    cout<<swap(a, b);


}
//call by reference
inline swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
cout<<"after swap number is "<<a <<b<<endl;

}
