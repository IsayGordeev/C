#include <cstdint>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

class Fraction {
private:
    // Do NOT rename
    int64_t numerator;
    uint64_t denominator;
    // Do NOT delete
    template < class T >
    friend bool operator==(const Fraction& lhs, const T& rhs);

public:

    Fraction() = delete;
    Fraction(const Fraction& rhs) {
        numerator = rhs.numerator;
        denominator = rhs.denominator;
        gcd(numerator, denominator);
    };

    Fraction(int64_t numerator, uint64_t denominator) : numerator(numerator), denominator(denominator) {
        gcd(this->numerator, this->denominator);
    }
    static int gcd(int a , int b)
    {
        if(b==0) return a;
        a%=b;
        return gcd(b,a);
    }
    //  Add operator overloads below
    static void gcd(uint64_t &a, uint64_t &b) {
        uint64_t d = std::__gcd(a, b);
        a /= d;
        b /= d;
    }
    static void gcd(int64_t &a, uint64_t &b) {
        uint64_t d = std::__gcd(static_cast<uint64_t>(std::abs(a)), b);
        a /= static_cast<int64_t>(d);
        b /= d;
    }

    static void gcd(Fraction& val) {
        uint64_t d = std::__gcd(static_cast<uint64_t>(std::abs(val.numerator)), val.denominator);
        val.numerator /= static_cast<int64_t>(d);
        val.denominator /= d;
    }




    void print(){
        std::cout << numerator << "/" << denominator << std::endl;
    }
};

//int main(){
//
//    Fraction a(1, 2);
//    Fraction c = a;
//    c += a;
//    c.print();
//
//}



