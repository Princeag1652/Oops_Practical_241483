#include <iostream>
using namespace std;

// Base class
class A
{
public:
    void showA()
    {
        cout << "Class A (Base Class)" << endl;
    }
};

// Single Inheritance
class B : public A
{
public:
    void showB()
    {
        cout << "Class B (Single Inheritance)" << endl;
    }
};

// Multilevel Inheritance
class C : public B
{
public:
    void showC()
    {
        cout << "Class C (Multilevel Inheritance)" << endl;
    }
};

// Hierarchical Inheritance
class D : public A
{
public:
    void showD()
    {
        cout << "Class D (Hierarchical Inheritance)" << endl;
    }
};

// Multiple Inheritance
class E
{
public:
    void showE()
    {
        cout << "Class E (Another Base Class)" << endl;
    }
};

class F : public A, public E
{
public:
    void showF()
    {
        cout << "Class F (Multiple Inheritance)" << endl;
    }
};

// Hybrid Inheritance
class G : public C, public E
{
public:
    void showG()
    {
        cout << "Class G (Hybrid Inheritance)" << endl;
    }
};

int main()
{
    cout << "----- Single Inheritance -----" << endl;
    B objB;
    objB.showA();
    objB.showB();

    cout << "\n----- Multilevel Inheritance -----" << endl;
    C objC;
    objC.showA();
    objC.showB();
    objC.showC();

    cout << "\n----- Hierarchical Inheritance -----" << endl;
    D objD;
    objD.showA();
    objD.showD();

    cout << "\n----- Multiple Inheritance -----" << endl;
    F objF;
    objF.showA();
    objF.showE();
    objF.showF();

    cout << "\n----- Hybrid Inheritance -----" << endl;
    G objG;
    objG.showA();
    objG.showB();
    objG.showC();
    objG.showE();
    objG.showG();

    return 0;
}