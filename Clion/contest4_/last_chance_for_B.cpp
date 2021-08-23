#include <cstdint>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
class Fraction {
private:
    // Do NOT rename

    // Do NOT delete
    template < class T >
    friend bool operator==(const Fraction& lhs, const T& rhs);

public:
    int64_t numerator;
    uint64_t denominator;
    Fraction() = delete;
    Fraction(const Fraction& rhs) {
        numerator = rhs.numerator;
        denominator = rhs.denominator;
        gcd(numerator, denominator);
    };

    void gcd(int64_t numerator, uint64_t denominator);

    Fraction(int64_t numerator, uint64_t denominator) : numerator(numerator), denominator(denominator) {
        gcd(this->numerator, this->denominator);
    }

    //  Add operator overloads below
    static void gcd(Fraction& val) {
        uint64_t d = std::__gcd(static_cast<uint64_t>(std::abs(val.numerator)), val.denominator);
        val.numerator /= static_cast<int64_t>(d);
        val.denominator /= d;
    }

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
    static void gcd(int64_t &a, int64_t &b) {
        uint64_t d = std::gcd(a, b);
        a /= d;
        b /= d;
    }

    friend std::ostream& operator<<(std::ostream &os, Fraction &first);

    Fraction incr(Fraction const& val){
        uint64_t d = std::__gcd(denominator, val.denominator);
        numerator = numerator * static_cast<int64_t>(val.denominator / d) + val.numerator * static_cast<int64_t>(denominator / d);
        denominator = (denominator / d) * val.denominator;
        gcd(*this);
        return *this;
    }


    Fraction substr(Fraction const& val){
        Fraction a(0, 1);
        uint64_t d = std::__gcd(denominator, val.denominator);
        a.numerator = numerator * static_cast<int64_t>(val.denominator / d) - val.numerator * static_cast<int64_t>(denominator / d);
        a.denominator = (denominator / d) * val.denominator;
        gcd(a);
        return a;
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

    Fraction divis(Fraction const& val){
        bool is_signed = (val.numerator >= 0) != (numerator >= 0);
        Fraction a(val);
        gcd(numerator, reinterpret_cast<uint64_t &>(a.numerator));
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
    Fraction& operator=(const Fraction& rhs) {
        numerator = rhs.numerator;
        denominator = rhs.denominator;
        gcd(numerator, denominator);
        return *this;
    }
    Fraction operator/(Fraction const& val) {
        return divis(val);
    }
    Fraction operator*(Fraction const& val) {
        return prod(val);
    }
    Fraction operator-(Fraction const& val) {
        return substr(val);
    }
    Fraction operator+=(Fraction const& val) {
        return incr(val);
    }

    Fraction operator+(Fraction const& val) {
        Fraction a(*this);
        return a += val;
    }
    Fraction operator-() {
        Fraction a(-numerator, denominator);
        return a;
    }
};

std::ostream& operator<<(std::ostream &os, Fraction &first){
    return os << first.print();
}



int main(){
    Fraction a(1,3);
    Fraction b(4,3);
    Fraction c = a + b;
    c+=a;
    std::cout << c;
}