#include <iostream>
#include <string>
#include <vector>
using namespace std;



class Number{
private:
    double Re;
    double Im;
public:
    Number():
    Re(0),Im(0)
    {};
    Number(double Re, double Im){
        this->Re = Re;
        this->Im = Im;
    }
    Number sum(Number& val){
        Number result;
        result.Re = Re + val.Re;
        result.Im = Im + val.Im;
        return result;
    }
    Number operator+(Number& val){
        return sum(val);
    }
    Number substr(Number& val){
        Number result;
        result.Re = Re - val.Re;
        result.Im = Im - val.Im;
        return result;
    }
    Number operator-(Number& val){
        return substr(val);
    }
    Number prod(Number& val){
        Number result;
        result.Re = Re * val.Re - Im * val.Im;
        result.Im = Re * val.Im + val.Re * Im;
        return result;
    }
    Number operator*(Number& val){
        return prod(val);
    }
    Number divis(const Number& val){
        Number result;
        result.Re = (Re * val.Re + Im * val.Im)/
                    (val.Re * val.Re+val.Im*val.Im);
        result.Im = (-Re * val.Im + val.Re * Im)/
                (val.Re * val.Re+val.Im*val.Im);
        return result;
    }
    Number operator/(Number& val){
        return divis(val);
    }
    void operator<<(Number& num){
        num.print1();
    }
    void print1(){
        cout << Re << " + " << "i";
       
    }
    string to_string() {
        string comp;
        if (this->Im >= 0){
            comp = std::to_string(this->Re) + "+" + std::to_string(this->Im) + "i";
        }
        else{
            comp = std::to_string(this->Re) + std::to_string(this->Im) + "i ";
        }
        return comp;
    }
    friend ostream& operator<<(ostream &os, Number &first);
    friend istream& operator>>(istream &os, Number &first);
};

ostream& operator<<(ostream &os, Number &first){
    return os << first.to_string();
}

istream& operator>>(istream &os, Number& first){
    return os >> first.Re >> first.Im;
}


int main() {
    Number a(-2,1),b(1,-1);
//    Number res = a.sum(b);
    Number res = a*b;
    Number ab;
   res = res*b*a;
//    res.print1();
    cout << res;
    cin >> ab;
    ab = ab * a;
    cout << ab;
    return 0;
}