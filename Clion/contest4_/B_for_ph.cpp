#include <cstdint>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
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
        gcd(reinterpret_cast<uint64_t &>(numerator), denominator);
    };
    Fraction operator/(Fraction const& val) {
        return divis(val);
    }
    Fraction operator*(Fraction const& val) {
        return umn(val);
    }
    Fraction operator-(Fraction const& val) {
        return minus(val);
    }
    Fraction& operator=(const Fraction&& rhs) {
        numerator = rhs.numerator;
        denominator = rhs.denominator;
        gcd(reinterpret_cast<uint64_t &>(numerator), denominator);
        return *this;
    }


    Fraction operator-() {
        Fraction a(-numerator, denominator);
        return a;
    }

    //  Add operator overloads below
    static void gcd(Fraction& val) {
        uint64_t d = std::__gcd(static_cast<uint64_t>(std::abs(val.numerator)), val.denominator);
        val.numerator /= static_cast<int64_t>(d);
        val.denominator /= d;
    }

    static void gcd(uint64_t &a, uint64_t &b) {
        uint64_t d = std::gcd(a, b);
        a /= d;
        b /= d;
    }
//    friend std::ostream& operator<<(std::ostream &os, Fraction &first);
//    friend std::istream& operator>>(std::istream &os, Fraction &first);
    
    Fraction incerement(Fraction const& val){
        uint64_t d = std::__gcd(denominator, val.denominator);
        numerator = numerator * static_cast<int64_t>(val.denominator / d) + val.numerator * static_cast<int64_t>(denominator / d);
        denominator = (denominator / d) * val.denominator;
        gcd(*this);
        return *this;
    }


    Fraction minus(Fraction const& val){
        Fraction a(0, 1);
        uint64_t d = std::__gcd(denominator, val.denominator);
        a.numerator = numerator * static_cast<int64_t>(val.denominator / d) - val.numerator * static_cast<int64_t>(denominator / d);
        a.denominator = (denominator / d) * val.denominator;
        gcd(a);
        return a;
    }

    Fraction umn(Fraction const& val){
        Fraction a(val);
        gcd(reinterpret_cast<uint64_t &>(numerator), a.denominator);
        gcd(reinterpret_cast<uint64_t &>(a.numerator), denominator);
        a.numerator = numerator * a.numerator;
        a.denominator = denominator * a.denominator;
        gcd(a);
        return a;
    }

    Fraction divis(Fraction const& val){
        bool is_signed = (val.numerator >= 0) != (numerator >= 0);
        Fraction a(val);
        gcd(reinterpret_cast<uint64_t &>(numerator), reinterpret_cast<uint64_t &>(a.numerator));
        gcd(a.denominator, denominator);
        a.numerator = std::abs(numerator) * val.denominator;
        if (is_signed) {
            a.numerator = -a.numerator;
        }
        a.denominator = denominator * std::abs(val.numerator);
        gcd(a);
        return a;
    }

    std::string print() {
        std::string a;
        a+=(std::to_string(numerator) +"/" + std::to_string(denominator));
        return a;
    }


    Fraction operator+(Fraction const& val) {
        Fraction a(*this);
        return a += val;
    }

    Fraction operator+=(Fraction const& val) {
        return incerement(val);
    }

    Fraction(int64_t numerator, uint64_t denominator) : numerator(numerator), denominator(denominator) {
        gcd(reinterpret_cast<uint64_t &>(this->numerator), this->denominator);
    }
};


std::ostream& operator<<(std::ostream &os, Fraction &first){
    return os << first.print();
}
//std::istream& operator>>(std::istream &os, Fraction &first){
//    return os >> numerator >> denuminator;
//}

int main(){
    Fraction a(1,3);
    Fraction b(5,3);
    Fraction c = a + b;
    std::cout << c;
}