#include <cstdint>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;
class Fraction {
private:
    // Do NOT rename

    // Do NOT delete
    template < class T >
    friend bool operator==(const Fraction& lhs, const T& rhs);
    
public:
    static int gcd(int a , int b)
    {
        if(b==0) return a;
        a%=b;
        return gcd(b,a);
    }
    
    int64_t numerator;
    uint64_t denominator;
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
        uint64_t d = gcd(static_cast<uint64_t>(abs(val.numerator)), val.denominator);
        val.numerator /= static_cast<int64_t>(d);
        val.denominator /= d;
    }

//    static void gcd(uint64_t &a, uint64_t &b) {
//        uint64_t d = gcd(a, b);
//        a /= d;
//        b /= d;
//    }
//    static void gcd(int64_t &a, uint64_t &b) {
//        uint64_t d = gcd(static_cast<uint64_t>(abs(a)), b);
//        a /= static_cast<int64_t>(d);
//        b /= d;
//    }
//    static void gcd(int64_t &a, int64_t &b) {
//        int64_t d = gcd(a, b);
//        a /= d;
//        b /= d;
//    }

    Fraction incr(Fraction const& val){
        uint64_t d = __gcd(denominator, val.denominator);
        numerator = numerator * static_cast<int64_t>(val.denominator / d) + val.numerator * static_cast<int64_t>(denominator / d);
        denominator = (denominator / d) * val.denominator;
        return *this;
    }

    Fraction sum(Fraction const& val){
        Fraction a(0, 1);
        uint64_t d = gcd(denominator, val.denominator);
        a.numerator = numerator * static_cast<int64_t>(val.denominator / d) + val.numerator * static_cast<int64_t>(denominator / d);
        a.denominator = (denominator / d) * val.denominator;
        return a;
    }

    Fraction substr(Fraction const& val){
        Fraction a(0, 1);
        uint64_t d = gcd(denominator, val.denominator);
        a.numerator = numerator * static_cast<int64_t>(val.denominator / d) - val.numerator * static_cast<int64_t>(denominator / d);
        a.denominator = (denominator / d) * val.denominator;
        return a;
    }

    Fraction prod(Fraction const& val){
        Fraction a(val);
        a.numerator = numerator * a.numerator;
        a.denominator = denominator * a.denominator;
        return a;
    }

    Fraction divis(Fraction const& val){
        bool is_signed = (val.numerator >= 0) != (numerator >= 0);
        Fraction a(val);
        a.numerator = abs(numerator) * val.denominator;
        if (is_signed) {
            a.numerator = -a.numerator;
        }
        a.denominator = denominator * abs(val.numerator);
        return a;
    }

    Fraction operator-() {
        Fraction a(-numerator, denominator);
        return a;
    }

    Fraction operator+=(Fraction const& val) {
        return incr(val);
    }

    Fraction operator+(Fraction const& val) {
        return sum(val);
    }

    Fraction operator-(Fraction const& val) {
        return substr(val);
    }

    Fraction operator*(Fraction const& val) {
        return prod(val);
    }

    Fraction operator/(Fraction const& val) {
        return divis(val);
    }
};