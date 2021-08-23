#include <cstdint>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <numeric>

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
    Fraction& operator=(const Fraction& rhs) {
        numerator = rhs.numerator;
        denominator = rhs.denominator;
        gcd(numerator, denominator);
        return *this;
    }
    Fraction(int64_t numerator, uint64_t denominator) : numerator(numerator), denominator(denominator) {
        gcd(this->numerator, this->denominator);
    }

    //  Add operator overloads below
    static void gcd(Fraction& val) {
        uint64_t d = std::__gcd(static_cast<uint64_t>(std::abs(val.numerator)), val.denominator);
        val.numerator /= static_cast<int64_t>(d);
        val.denominator /= d;
    }

    static void gcd(int64_t &a, uint64_t &b) {
        uint64_t d = std::__gcd(static_cast<uint64_t>(std::abs(a)), b);
        a /= static_cast<int64_t>(d);
        b /= d;
    }

    Fraction operator-() {
        Fraction a(-numerator, denominator);
        return a;
    }

    Fraction sum(Fraction const& val){
        Fraction a(0, 1);
        uint64_t d = std::gcd(denominator, val.denominator);
        a.numerator = numerator * static_cast<int64_t>(val.denominator / d) + val.numerator * static_cast<int64_t>(denominator / d);
        a.denominator = (denominator / d) * val.denominator;
        gcd(a);
        return a;
    }
    Fraction operator+(Fraction const& val) {
        return sum(val);
    }
    Fraction substr(Fraction const& val){
        Fraction a(0, 1);
        uint64_t d = std::gcd(denominator, val.denominator);
        a.numerator = numerator * static_cast<int64_t>(val.denominator / d) - val.numerator * static_cast<int64_t>(denominator / d);
        a.denominator = (denominator / d) * val.denominator;
        gcd(a);
        return a;
    }
    Fraction operator-(Fraction const& val) {
        return substr(val);
    }
    Fraction prod(Fraction const& val){
        Fraction a(val);
        gcd(numerator, a.denominator);
        gcd(a.numerator, denominator);
        a.numerator = numerator * a.numerator;
        a.denominator = denominator * a.denominator;
        gcd(a);
        return a;
    }
    Fraction operator*(Fraction const& val) {
        return prod(val);
    }

    Fraction operator/(Fraction const& val) {
        bool is_signed = (val.numerator >= 0) != (numerator >= 0);
        Fraction a(val);
        gcd(numerator, reinterpret_cast<uint64_t &>(a.numerator));
        gcd(reinterpret_cast<int64_t &>(a.denominator), denominator);
        a.numerator = std::abs(numerator) * val.denominator;
        if (is_signed) {
            a.numerator = -a.numerator;
        }
        a.denominator = denominator * std::abs(val.numerator);
        gcd(a);
        return a;
    }
    void print(){
        std::cout << numerator << "/" << denominator << std::endl;
    }
};

//int main(){
//
//    Fraction a(1, 2);
//    Fraction c = a - a;
//    c.print();
//
//}