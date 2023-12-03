#include <iostream>
using namespace std;
 
class Parent {
public:
    void samefunction()
    {
        cout<<"Base Function"<<endl;
    }
};
 
class Child : public Parent {
public:
    void samefunction()
    {
        cout<< "Derived Function"<<endl;
    }
};
 
int main()
{
    Child ch, pre;
    ch.samefunction();
    pre.Parent::samefunction();
    return 0;
}
