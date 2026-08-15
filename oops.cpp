// OOPS concepts
#include <iostream>
#include <string>
using namespace std;

// // ques. to create a class for a teacher.
// class Teacher
// {
// private:
//     double salary;

//     public:
//     // properties or attributes
//     string name;
//     string dept;
//     string subject;

//     // methods or member functions
//     void changedept(string newdept) 
//     {
//         dept = newdept;
//     }

//     // setter and getter for salary to get the private data member which is salary
//     void setSalary(double s) {
//         salary = s;
//     }

//     double getSalary() {
//         return salary;
//     }
// };

// int main() 
// {
//     Teacher t1;
//     t1.name = "Vidhi";
//     t1.dept = "CS";
//     t1.subject = "C++";
//     t1.setSalary(40000);
//     t1.dept = "IT";

//     cout << t1.name << endl;
//     cout << t1.dept << endl;
//     cout << t1.getSalary() << endl;

//     return 0;

// }


// // Ques. to create a class for an account with data hiding and encapsulation.
// class Account {
// private :
//     double balance;
//     string password; // data hiding -- encapsulation

// public:
//     string accountID;
//     string username;

// }


// //ques. to create a non - parameterised constructor in a class for a teacher.
// class Teacher
// {
// private:
//     double salary;

//     public:
//     // non-parameterized constructor
//     Teacher() {
//         dept = "Computer Science";
//     }

//     public:
//     // properties or attributes
//     string name;
//     string dept;
//     string subject;

//     // methods or member functions
//     void changedept(string newdept) 
//     {
//         dept = newdept;
//     }

//     void setSalary(double s) {
//         salary = s;
//     }

//     double getSalary() {
//         return salary;
//     }
// };

// int main() 
// {
//     Teacher t1;
//     t1.name = "Vidhi";
//     t1.subject = "C++";
//     t1.setSalary(40000);

//     cout << t1.dept << endl;

//     return 0;

// }


// // Ques. to create a parameterized constructor in a class for a teacher.
// class Teacher
// {
// private:
//     double salary;

// public:
// // parameterized constructor
//     Teacher(string n, string d, string s, double sal ) {
//         name = n;
//         dept = d;
//         subject = s;
//         salary = sal;
//     }

// public:
// // properties or attributes
//     string name;
//     string dept;
//     string subject;

//     // methods or member functions
//     void getinfo(){
//         cout << "name: " << name << endl;
//         cout << "department: " << dept << endl;
//     }
// };

// int main() 
// {
//     Teacher t1("Vidhi", "CS", "C++", 40000);
//     t1.getinfo();

//     Teacher t2(t1); // default copy constructor
//     t2.getinfo();

//     return 0;
// }


// // Destructor example
// class Student {
//     public:
//     string name ;
//     double cgpa ;

//     Student(string name, double cgpa) {
//         this->name = name; 
//         this->cgpa = cgpa; 
//     }

//     // Destructor
//     ~Student() {
//         cout << "Destructor called for " << name << endl;
//     }

//     void getinfo() {
//         cout << "Name: " << name << endl;
//         cout << "CGPA: " << cgpa << endl;
//     }
// };

// int main() {
//     Student s1("Vidhi", 9.5);
//     s1.getinfo();

//     Student s2("Mahesh", 8.7);
//     s2.getinfo();

//     // Destructor will be called automatically when the objects go out of scope
//     return 0;
// }   


// // Inheritance example
// class Person {
//     public:
//     string name;
//     int age;

//     Person(){
//     }
// };

// class Student : public Person {
//    public:
//     int rollNumber;

//     void getinfo() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Roll Number: " << rollNumber << endl;
//     }
// };

// int main(){
//     Student s1;
//     s1.name = "Vidhi";
//     s1.age = 19;
//     s1.rollNumber = 24570071;
//     s1.getinfo();

//     return 0;
// }


// // Constructor Overloading Example
// class Student{
//     public:
//     string name ;

//     Student() {
//         cout << "non parameterized constructor " << endl;
//         name = "unknown";
//     }

//     Student(string name) {
//         this->name = name; // using 'this' pointer to refer to the current object
//         cout << "parameterized constructor " << endl;

//     }
// };

// int main() {
//     Student S1;
//     cout << "Name: " << S1.name << endl;

//     Student S2 ("Vidhi");
//     cout << "Name: " << S2.name << endl;
//     return 0;

// }


// // function overloading example
// class Print{
//     public:
//     void show(int x){
//         cout << "Integer: " << x << endl;
//     }

//     void show(char x) {
//         cout << "Character: " << x << endl;
//     }
// };

// int main() {
//     Print p;
//     p.show(100); // here there was the need of int type function so the int type function is called
//     p.show('A'); // here there was the need of char type function so the char type function is called
//     return 0;       
// }


// // Constructor Overloading Example
// class Student {
// public:
//     string name;
//     int age;

//     // Default constructor
//     Student() {
//         name = "Unknown";
//         age = 0;
//     }

//     // Constructor with one parameter
//     Student(string n) {
//         name = n;
//         age = 0;
//     }

//     // Constructor with two parameters
//     Student(string n, int a) {
//         name = n;
//         age = a;
//     }

//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     Student s1;
//     Student s2("Vidhi");
//     Student s3("Vidhi", 20);

//     s1.display();
//     s2.display();
//     s3.display();

//     return 0;
// }


// // function overriding example // overriding means inheritance is used here.
// class Parent{
//     public:
//     void show() {
//         cout << "Parent class" << endl;
//     }
// };

// class Child : public Parent {
//     public:
//     void show() {
//         cout << "Child class" << endl;
//     }
// };  
// int main() {
//     Parent p;
//     p.show();

//     Child c;
//     c.show();
    
//     return 0;
// }


// // Abstract class example
// class Shape {
// public:
//     virtual void draw() = 0; // pure virtual function
// };

// class Circle : public Shape {
// public:
//     void draw() {
//         cout << "Drawing Circle" << endl;
//     }
// };  

// int main() {
//     Circle c;
//     c.draw(); // Calls the draw function of Circle class

//     // Shape s; // This line would cause an error because Shape is an abstract class
//     return 0;
// }


// // static keyword example
// void fun() {
//     static int x = 0; // by suing static keyword once used the value of x will not be lost after the function call
//     // it will retain its value between function calls
//     cout << "x: " << x << endl;
//     x++;
// };
//  int main(){
//     fun();
//     fun();
//     fun();

//     return 0;

// }
