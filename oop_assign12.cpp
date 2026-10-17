
#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    // 1. static_cast
    double number = 10.75;
    int value = static_cast<int>(number);

    cout << "Static Cast: " << value << endl;

    // 2. dynamic_cast
    Base* basePtr = new Derived();

    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);

    if (derivedPtr != nullptr) {
        cout << "Dynamic Cast: Successful" << endl;
        derivedPtr->show();
    }

    delete basePtr;

    // 3. const_cast
    int marks = 50;
    const int* constPtr = &marks;

    int* modifiablePtr = const_cast<int*>(constPtr);
    *modifiablePtr = 80;

    cout << "Const Cast: " << marks << endl;

    // 4. reinterpret_cast
    int num = 100;
    int* intPtr = &num;

    char* charPtr = reinterpret_cast<char*>(intPtr);

    cout << "Reinterpret Cast: Pointer converted"
         << endl;
    cout << "Value through original pointer: "
         << *intPtr << endl;

    return 0;
}
