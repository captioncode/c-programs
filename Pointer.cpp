//#include<iostream>
//using namespace std;
//int main()
//{
//    int a=40;
//    int*b;
//    b=&a;
//    cout<<"The value of a is "<<a<<endl;
//    cout<<"The value of a is "<< *b<<endl;
//    cout<<"The Address of a is "<< b<<endl;
//    return 0;
//
//}
//pointer to pointers
#include<iostream>
using namespace std;
int main()
{
   int a=40;
    int*b;
    b=&a;
    int **c=&b;
    cout<<"The number of a is "<<&a<<endl;
    cout<<"The number of b is "<<*c<<endl;
    cout<<"The Address  of c is "<<&b<<endl;
    return 0;



}
