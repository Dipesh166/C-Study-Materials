#include<iostream>
using namespace std;

class A {
    int x=5;
    public :
    void display (){
        cout<<"THE VALUE OF X is: "<<x<<endl;
    }
};

class B : public A {
    int y = 10;
    public:
    void display (){

        cout<<"THE VALUE OF Y is: "<<y<<endl;

    }+
};

int main (){
    A* a;
    //B b;
    a = &b;

    a -> display();
    return 0;
}