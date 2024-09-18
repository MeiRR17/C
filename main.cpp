#include <iostream>
#include <stdio.h>

class Obj {
    static int count;
    int num1;
    int num2;
    Obj(int num1) {
        count++;
        num1 = num1;
        num2 = 2 * num1;
    }
    Obj(int num1, int num2 = 2) {
        num1 = num1;
        num2 = num2;
    }
    public:
    void show() {
        std::cout << "num1= " << num1 << "num2= " << num2 << std::endl;
    }

    int getCounter(){return Obj::count;}
    Obj operator+(Obj other) const{return Obj(num1 + other.num1);}
    Obj operator+(int num1) const{return Obj(this -> num1 + num1);}
    Obj operator+(int num, Obj p) {return p + num;}
    int count = -1;
};


int main() {
    Obj obj1(1), obj2(10);
    Obj obj3(7.6);
    Obj obj4 = 5;
    Obj obj5, obj6;
    obj5 = obj1 + obj2;
    obj6 = 4.2 + obj2;
    std::cout << "numObjects " << Obj::getCounter() << std::endl << std::endl;

    std::cout << "obj1 -> " << obj1.show();
    std::cout << "obj2 -> " << obj2.show();
    std::cout << "obj3 -> " << obj3.show();
    std::cout << "obj4 -> " << obj4.show();
    std::cout << "obj5 -> " << obj5.show();
    std::cout << "obj6 -> " << obj6.show();
    return 0;
}
