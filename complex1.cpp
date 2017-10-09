#include <iostream>
using namespace std;
class Complex{
    float x; //real part
    float y; //imaginary part
public:
    Complex(){
        // a default constructor which creates the complex number 0+0i
        x=0;
        y=0;
    }
    Complex(float real,float imag){
        x=real;
        y=imag;
    }
    friend istream &operator>>(istream &,Complex &);
    friend ostream & operator<<(ostream &,Complex);
    friend Complex operator+(Complex,Complex);
    Complex operator*(Complex);

};
istream & operator>>(istream &din,Complex &complex){
    // Overloading >> to read Complex Numbers.
    cout << "Enter real and imaginary part of your Complex number:"<< endl;
    din >> complex.x >> complex.y;
    return din;
}
ostream & operator<<(ostream &dout,Complex complex){
   // Overloading << to print Complex Numbers.
    dout << complex.x << " + " << complex.y << "i" << endl;
    return dout;
}
Complex operator+(Complex c1,Complex c2) {
    //Overloading operator+ using friend function to add two complex numbers.
    return Complex((c1.x+c2.x),(c1.y+c2.y));
}
Complex Complex ::operator*(Complex c) {
    //Overloading operator* to multiply two complex numbers.
    Complex temp;
    // using rule (a+bi)(c+di) = (ac-bd) + (ad+bc)i
    temp.x = (x * c.x) - (y * c.y);
    temp.y = (x * c.y) + (y * c.x);
    return temp;
}

int main(){
    Complex complex; //creates 0+0i
    Complex complex1;
    cin >> complex1; //invokes overloaded >> operator
    cout << complex1;//invokes overloaded << operator
    Complex complex2;
    cin >> complex2;
    cout << complex2;
    Complex complex3 = complex1 + complex2; //invokes overloaded + operator
    cout << "Addition is: ";
    cout << complex3;
    complex3 = complex1 * complex2; //invokes overloaded * operator
    cout << "Multiplication is: ";
    cout << complex3;
}
