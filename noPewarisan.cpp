#include <iostream>
using namespace std;   

class baseClass final {  //final digunakan untuk mencegah pewarisan
    public:
    virtual void perkenalan() {
        cout << "Halo saya function dari base class";
    }
};

class baseClass1 {
    public:
    virtual void perkenalan() {
        cout << "Halo saya function dari base class 2";
    }
};

class derivedClass : public baseClass1 { 
    public:
    void perkenalan() {
        cout << "Halo saya function dari derived class";
    }
};

int main() {
    derivedClass a;
    a.perkenalan();
    
    return 0;
}