#include "fraction.h"
#include "fraction_write.h"

//class A {
//
//};
//
//class B {
//public:
//    std::string atr;
//    B(std::string atr) { this->atr = atr; }
//    ~B() {}
//    void toString() {std::cout << this->atr << '\n'; }
//};

class B {
public:
    B() { std::cout << "B() "; }
    virtual void f() { std::cout << "B.f "; }
    void g() { f(); }
    virtual void h() { g(); }
};

class D : public B {
    //D() { std::cout << "D() "; }
public:
    D() { std::cout << "D() "; }
    void f() { std::cout << "D.f "; }
    void h() { std::cout << "Function h "; B::h(); }
};

int main() {
    B b{};
    D d{};
    B& dd = d;
    b.g();
    dd.h();
    return 0;
}

//int main(int argc, const char * argv[]) {
////    fraction p(3,4), q(5,2), r;
////    r = p.multiply(q);
////    p.display();
////    std::cout << "\n";
////    r.display();
////    std::cout << "\n";
////    fraction_write p1(3,4), q1(5,2);
////    fraction r1, r2;
////    r1 = p1.product(q1);
////    r2 = p1.multiply(q1);
////    p1.display();
////    std::cout << "\n";
////    r1.display();
////    std::cout << "\n";
////    r2.display();
////    std::cout << "\n";
//    B b{"Here"};
//    b.toString();
//
//    return 0;
//}
