#include<iostream>
#include<typeinfo>
using namespace std;
int main (){
using namespace std;
int a;
float b;
double f=7.98;
cout<<"\n type of a is :"<<typeid(a).name();
cout<<"\n type of b is :"<<typeid(b).name();
cout<<"\n type of f is :"<<typeid(f).name();

return 0;

}