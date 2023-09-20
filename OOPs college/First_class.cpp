#include <iostream>
using namespace std;
#define mod 1e9+7
/*
  Object is same as class;
  By default members are \
  private;
  access specifier;
  state == attributes;
  behaviour == functions(), or methods;
  Object provides reusability;
  (.) Operator means oriented.
  Physical things == 

*/
class First_class
{
    int data;
public:
   
    void display() {
        cout<<data<<endl;
    }
    void show() {
        cout<<"Hello Bharat"<<endl;
    }
    
};


int main() {
    First_class test;
    test.display();

    return 0;
}