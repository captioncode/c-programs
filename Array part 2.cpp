 #include<iostream >
 using namespace std;
 int main()
 {

      int marks[5]={4,5,6,7,8};
       int *p=marks;
     cout<<*(p++)<<"\n";
     cout<<*(++p);

 }
