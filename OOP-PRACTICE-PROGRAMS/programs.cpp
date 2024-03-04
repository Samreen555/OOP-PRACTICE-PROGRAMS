// classes
/*
// 1. rectangle area calculator
#include <iostream>
using namespace std;
class Rectangle    // rectangle class
{
private:
    int length, width;
public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    int calculateArea() {
        return length * width;
    }
};
int main() {
    Rectangle rectangle(5, 4);
    cout << "Area of rectangle: " << rectangle.calculateArea() << endl;
    system("pause");
    return 0;
}*/
// 2. bank account
/*
#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    double balance;
public:
    BankAccount(string accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        }
        else 
            cout << "Insufficient funds" <<endl;
    }
    void displayBalance() {
        cout << "Account Balance: " << balance <<endl;
    }
};
int main() {
    BankAccount account1("12345", 1000);
    account1.displayBalance();
    account1.deposit(500);
    account1.displayBalance();
    account1.withdraw(200);
    account1.displayBalance();
    account1.withdraw(1500);
    system("pause");
    return 0;
}
*/
//3. student information
/*
#include <iostream>
using namespace std;
class Student {
private:
    string name, grade;
    int age;

public:
    Student(string n, int a, string g) {
        name = n;
        age = a;
        grade = g;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade <<endl;
    }
};
int main() {
    Student student1("Alice", 15, "10th");
    student1.displayInfo();
    system("pause");
    return 0;
}
*/
// inheritances
//1. rectanagle area calculator
/*
#include <iostream>
using namespace std;
class Shape {
protected:
    int length, width;
public:
    Shape(int l, int w) {
        length = l;
        width = w;
    }
};
class Rectangle : public Shape {
public:
    Rectangle(int l, int w) : Shape(l, w) {}

    int calculateArea() {
        return length * width;
    }
};
class Circle : public Shape
{
public:
    Circle(int l,int w=0):Shape(l,w=0)  { }
    int calculate()
    {
        return length * length;
    }
};
int main() {
    Rectangle rectangle(5, 4);
    cout << "Area of rectangle: " << rectangle.calculateArea() << endl;
    Circle circle(4);
    cout << "Area of circle: " << circle.calculate() << endl;
    system("pause");
    return 0;
}
*/
// 2. Bank Account with Inheritance:
/*
#include <iostream>
using namespace std;
class Account {
protected:
    string accountNumber;
    double balance;
public:
    Account(string accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        }
        else {
            cout << "Insufficient funds" << endl;
        }
    }
    void displayBalance() {
        cout << "Account Balance: " << balance << endl;
    }
};
class BankAccount : public Account {
public:
    BankAccount(string accNum, double bal) : Account(accNum, bal) {}
};
int main() {
    BankAccount account1("12345", 1000);
    account1.displayBalance();
    account1.deposit(500);
    account1.displayBalance();
    account1.withdraw(200);
    account1.displayBalance();
    account1.withdraw(1200);
    system("pause");
    return 0;
}
*/
// 3.Student Information with Inheritance:
/*
#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age <<endl;
    }
};
class Student : public Person {
private:
    string grade;
public:
    Student(string n, int a, string g) : Person(n, a) {
        grade = g;
    }
    void displayInfo() {
        Person::displayInfo();
        cout << "Grade: " << grade <<endl;
    }
};
int main() {
    Student student1("Alice", 15, "10th");
    student1.displayInfo();
    system("pause");
    return 0;
}
*/
// abstract classes
/*
#include <iostream>
using namespace std;
// Abstract class
class Shape {
public:
    // Pure virtual function makes this class abstract
    virtual double area() = 0;
    virtual double perimeter() = 0;
};
// Concrete class derived from Shape
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w)
    {

    }
    double area() override {
        return length * width;
    }
    double perimeter() override {
        return 2 * (length + width);
    }
};
// Concrete class derived from Shape
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r)
    {

    }
    double area() override {
        return 3.14 * radius * radius;
    }
    double perimeter() override {
        return 2 * 3.14 * radius;
    }
};
int main() {
    // Shape *shape = new Shape(); // This is not allowed as Shape is abstract
    Shape* rectangle = new Rectangle(5, 4);
    Shape* circle = new Circle(3);
    cout << "Area of rectangle: " << rectangle->area() <<endl;
    cout << "Perimeter of rectangle: " << rectangle->perimeter() <<endl;
    cout << "Area of circle: " << circle->area() << endl;
    cout << "Perimeter of circle: " << circle->perimeter() <<endl;

    delete rectangle;
    delete circle;
    system("pause");
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int x = 5; // Global variable
int main() {
    int x = 10; // Local variable
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x <<endl; // Referring to the global x
    system("pause");
    return 0;
}
*/
/*
// 2. Namespace Scope Resolution:
#include<iostream>
using namespace std;
namespace NS {
    int x = 5;
    void foo() {
        cout << "Inside NS::foo()" <<endl;
    }
}
int main() {
    cout << "x from NS: " << NS::x <<endl;
    NS::foo();
    system("pause");
    return 0;
}
*/
//3.Class/Struct Member Access:
/*
#include<iostream>
using namespace std;
class MyClass {
public:
    static int x; // Static member variable
    void display() {
        cout << "Inside MyClass::display()" <<endl;
    }
};
int MyClass::x = 10; // Define static member variable
int main() {
    cout << "Static member x: " << MyClass::x << endl;
    MyClass obj;
    obj.display();
    system("pause");
    return 0;
}
*/
/*
// 4. Nested Class/Struct Access:
#include<iostream>
using namespace std;
class Outer {
public:
    int x = 5;
    class Inner {
    public:
        void display() {
            cout << "Inside Outer::Inner::display()" <<endl;
        }
    };
};
int main() {
    Outer::Inner innerObj;
    innerObj.display();
    system("pause");
    return 0;
}
*/
/*
//static data member
#include <iostream>
using namespace std;
class MyClass {
public:
    static int count; // Declaration of static data member
    int value;
    MyClass(int v) : value(v) {
        count++; // Increment count each time an object is created
    }
    static void displayCount() {
        cout << "Total objects created: " << count <<endl;
    }
};
// Definition of static data member
int MyClass::count = 0;
int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass obj3(30);
    MyClass::displayCount(); // Accessing static member function
    system("pause");
    return 0;
}
*/
/*
// const member function
#include <iostream>
using namespace std;
class MyClass {
public:
    int value;
    MyClass(int v) : value(v)       // Constructor
    {
    
    }
    void display() const       // Const member function
    {
        // value = 10; // Error: Cannot modify non-mutable member in a const member function
        cout << "Value: " << value << endl;
    }
    void setValue(int v)      // Non-const member function
    {
        value = v;
    }
};
int main() {
    const MyClass obj(5); // Const object

    obj.display(); // Const member function can be called on const object
    // obj.setValue(10); // Error: Cannot call non-const member function on const object
    system("pause");
    return 0;
}
*/
// operator overloading
/*
#include <iostream>
using namespace std;
class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) 
    {
    
    }
    Complex operator+(const Complex& other) const       // Overloading the + operator for addition
    {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(const Complex& other) const     // Overloading the - operator for subtraction
    {
        return Complex(real - other.real, imag - other.imag);
    }
    Complex operator*(const Complex& other) const       // Overloading the * operator for multiplication
    {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }
    friend std::ostream& operator<<(std::ostream& out, const Complex& c)      // Overloading the << operator for output
    {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};
int main() {
    Complex a(2, 3);
    Complex b(4, 5);
    Complex sum = a + b; // Calls the overloaded + operator
    Complex difference = a - b; // Calls the overloaded - operator
    Complex product = a * b; // Calls the overloaded * operator
    cout << "Sum: " << sum <<endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product <<endl;
    system("pause");
    return 0;
}
*/
// inline function
#include <iostream>
using namespace std;
// Inline function definition
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4); // The function call may be replaced with the function body
    cout << "Result: " << result <<endl;
    system("pause");
    return 0;
}
