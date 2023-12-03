// #include <iostream>
// using std::string;

// class Emp{
// public:
//     string Name;
//     string Company;
//     int Age;

//     void behaviar(){
//         std::cout<< "Name - " << Name << std::endl; 
//         std::cout<< "Compnay - " << Company << std::endl; 
//         std::cout<< "Age - " << Age << std::endl; 
//     }
// };

// int main(){
//     int number;
//     Emp emp1;
//     emp1.Name = "Vivek";
//     emp1.Company = "Amazone";
//     emp1.Age = 18;

//     emp1.behaviar();
// }



// Create multiple object 



// #include <iostream>
// using std::string;

// class Emp{
// public:
//     string Name;
//     string Company;
//     int Age;

//     void behaviar(){
//         std::cout<< "Name - " << Name << std::endl; 
//         std::cout<< "Compnay - " << Company << std::endl; 
//         std::cout<< "Age - " << Age << std::endl; 
//     }
// };

// int main(){
//     Emp emp1;
//     emp1.Name = "Vivek";
//     emp1.Company = "Amazone";
//     emp1.Age = 18;

//     Emp emp2;
//     emp2.Name = "coder";
//     emp2.Company = "google";
//     emp2.Age = 19;

//     emp2.behaviar();

//     emp1.behaviar();
// }


// Constactor in C++

// #include <iostream>
// using std::string;

// class Emp{
//     //default class is private
// public:
//     string Name;
//     string Company;
//     int Age;

//     void behaviar(){
//         //user define function with not retune data type
//         //this function used for printing the data
//         std::cout<< "Name - " << Name << std::endl; 
//         std::cout<< "Compnay - " << Company << std::endl; 
//         std::cout<< "Age - " << Age << std::endl; 
//     }
//     Emp( string name, string company, int age){
//     //constractor have not return data type
//     //constractor or class name always same
//     //Emp = Emp
//     //conrtractor always is public
//     //if it is public than it is not able to used in outside of the class
//         Name = name;
//         Company = company;
//         Age = age;
//     }
// };

// int main(){
//     //class  object = constractor(agrument list values);
//     Emp emp1 = Emp("Vivek","Amazone", 18);
//     //emp1 is a object of the class Emp
//     //Name is the property of Emp class 
//     // emp1.Name = "Vivek";
//     // emp1.Company = "Amazone";
//     // emp1.Age = 18;

//     Emp emp2 = Emp("Coder","Google",21);
//     // emp2.Name = "coder";
//     // emp2.Company = "google";
//     // emp2.Age = 19;

//     emp2.behaviar();

//     emp1.behaviar();
// }


// Encapsulation

// #include<iostream>
// using std::string;

// class Emp{
// private:
//         string Name;
//         string Company;
//         int Age;

// public:
//         void setName(string name){ 
//             //setter 
//             Name = name;
//         }
//         string getName(){
//             //getter
//             return Name;
//         }
//         void setCompany(string company){
//             //setter 
//             Company = company;
//         }
//         string getCompany(){
//             //getter
//             return Company;
//         }
//         void setAge(int age){
//             //setter 
//             if(age>=18){
//                 Age = age;
//             }
//         }
//         int getAge(){
//             //getter
//             return Age;
//         }

//         Emp( string name, string company, int age){
//         Name = name;
//         Company = company;
//         Age = age;
//     }
// };

// int main(){
//     Emp emp1 = Emp("Vivek","Amazone", 17);
//     emp1.setAge(15);
//     std::cout<<emp1.getName()<<" is " <<emp1.getAge()<<" years old "<<emp1.getCompany() <<std::endl;
// }


// Abstraction

// #include<iostream>
// using std::string;

// class AbstractEmp{
//     virtual void Promotion()=0;
// };

// class Emp:AbstractEmp{
// private:
//         string Name;
//         string Company;
//         int Age;

// public:
//         Emp( string name, string company, int age){
//             Name = name;
//             Company = company;
//             Age = age;
//         }

//         void Promotion(){
//             if(Age>30){
//                 std::cout <<Name << " , You got it..."<<std::endl;
//             }
//             else{
//                 std::cout <<Name << " , Sorry"<<std::endl;
//             }
//         }


// };


// int main(){
//     Emp emp1 = Emp("Vivek","Amazone", 45);

//     emp1.Promotion();


// }


// Inheritance

// #include<iostream>
// using std::string;

// class Emp{
// private:
//         string Name;
//         int Age;

// protected:
//         string Company;



// public:
//         void setName(string name){ 
//             Name = name;
//         }
//         string getName(){
//             return Name;
//         }
//         void setCompany(string company){
//             Company = company;
//         }
//         string getCompany(){
//             return Company;
//         }
//         void setAge(int age){
//                 Age = age;
//         }
//         int getAge(){
//             return Age;
//         }

//         Emp( string name, string company, int age){
//             Name = name;
//             Company = company;
//             Age = age;
//         }
        
//         void Promotion(){
//             if(Age>30){
//                 std::cout <<Name << " , You got it..."<<std::endl;
//             }
//             else{
//                 std::cout <<Name << " , Sorry"<<std::endl;
//             }
//         }
// };

// class Developers:public Emp{
// public:
//     string Favlan;
//     Developers(string name, string company, int age, string favlan):Emp(name, company, age){
//         Favlan = favlan;
//     }
//     void Printdev(){
//         std::cout<<getName()<<" is the " <<Favlan <<" language "<<"working with "<<Company <<std::endl;
//     }
// };

// int main(){
//     Developers d1= Developers("Vivek", "Google",21,"c++");
//     d1.Printdev();
//     d1.Promotion();

// }




#include<iostream>
using std::string;

class Emp{
private:
        int Age;

protected:
        string Company;
        string Name;




public:
        void setName(string name){ 
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }
        void setAge(int age){
                Age = age;
        }
        int getAge(){
            return Age;
        }

        Emp( string name, string company, int age){
            Name = name;
            Company = company;
            Age = age;
        }
        
        void Promotion(){
            if(Age>30){
                std::cout <<Name << " , You got it..."<<std::endl;
            }
            else{
                std::cout <<Name << " , Sorry"<<std::endl;
            }
        }
        void Work(){
            std::cout<<Name<<" is main work "<<std::endl;  
        }
};

class Developers:public Emp{
public:
    string Favlan;
    Developers(string name, string company, int age, string favlan):Emp(name, company, age){
        Favlan = favlan;
    }
    void Printdev(){
        std::cout<<getName()<<" is the " <<Favlan <<" language "<<"working with "<<Company <<std::endl;
    }
};

class Teachers:public Emp{
public:
    string Favlan;
    Teachers(string name, string company, int age, string favlan):Emp(name, company, age){
        Favlan = favlan;
    }
    void Printdev(){
        std::cout<<getName()<<" is the " <<Favlan <<" language "<<"working with "<<Company <<std::endl;
    }
};


int main(){
    Developers d1= Developers("Vivek", "Google",21,"c++");
    Teachers t1= Teachers("Coder","Amazon",32);
    t1.Work();
    // d1.Printdev();
    // d1.Promotion();
    d1.Work();

}
