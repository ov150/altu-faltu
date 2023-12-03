#include <iostream>
using namespace std;
 
// class Parent {
// public:
//     void samefunction()
//     {
//         cout<<"Base Function"<<endl;
//     }
// };
 
// class Child : public Parent {
// public:
//     void samefunction()
//     {
//         cout<< "Derived Function"<<endl;
//     }
// };
 
// int main()
// {
//     Child ch, pre;
//     ch.samefunction();
//     pre.Parent::samefunction();
//     return 0;
// }




class base{
    public:
        void display(){ 
            cout<<"\n Over riding"<<endl;
        }
};

class derived: public base{  
    public:
    
        void display(int a, int b){
            int c;
            c=a+b;
            cout<<"\nSum is "<<c;
        }
};

int main(){
    derived d,b;
    d.display(10,30);
    b.base::display();

    return 0;
}