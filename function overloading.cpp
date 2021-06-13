#include<iostream>
using namespace std;
//function overloading is a process to make more than one function with the same name but different parameter,numbers,sequence;
int sum(float a,int b)
{
   // cout<"Using function with two arguments"<<endl;
    return a+b;
}
int sum(int a,int b,int c)
{
  return (a+b+c);
}
