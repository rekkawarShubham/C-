#include <iostream>
#include <cmath>
using namespace std;
class Polynomial{

    float a,b,c;
public:
    Polynomial(){
        //a default constructor which creates the 0 polynomial
        this->a = 0;
        this->b = 0;
        this->c = 0;
    }
    Polynomial(float a, float b, float c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    friend istream & operator>>(istream &,Polynomial &);
    friend ostream & operator<<(ostream &,Polynomial);
    Polynomial operator+(Polynomial);
    float eval(float);
    void solve();
};
istream & operator>>(istream &din,Polynomial &p){

    //Overloading >> to read Polynomials.
    cout << "Enter coefficients of your Quadratic Polynomial:" << endl;
    din >> p.a >> p.b >> p.c;
    return din;
}
ostream & operator<<(ostream &dout,Polynomial p){

    //Overloading << to print Polynomials.
    dout << p.a << "x^2 + " << p.b << "x + " << p.c << " = 0";
    return dout;
}
Polynomial Polynomial ::operator+(Polynomial p) {

    //Overloading operator+ to add two polynomials of degree 2.
    Polynomial polynomial;
    polynomial.a = a + p.a;
    polynomial.b = b + p.b;
    polynomial.c = c + p.c;
    return polynomial;
}
float Polynomial::eval(float x) {

    return ((a*x*x)+(b*x)+c);
}
void Polynomial::solve() {

    float alpha,beta;
    float delta = (b*b) - (4*a*c);
    if (delta > 0) {
        delta = sqrt(delta);
        cout << "The value of discriminant is " << delta << endl;
        cout << "The Polynomial has two real Solutions." << endl;
        alpha = (-b + delta)/(2*a);
        beta = (-b - delta)/(2*a);
        cout << "Solution 1 is " << alpha << endl;
        cout << "Solution 2 is " << beta << endl;
    } else if(delta == 0){
        delta = sqrt(delta);
        cout << "The value of discriminant is " << delta << endl;
        cout << "The Polynomial has one real Solution." << endl;
        alpha = (-b + delta)/(2*a);
        cout << "Solution is " << alpha << endl;
    }
    else{
        cout << "The value of discriminant is " << delta << endl;
        cout << "The Solutions of given Quadratic Polynomial are Complex." << endl;
    }

}
int main(){
    Polynomial p1;
    Polynomial p2;
    Polynomial p3;
    cin >> p1; //invokes overloaded >> operator
    cin >> p2;
    p3 = p1 + p2; //invokes overloaded + operator
    cout << p1 << endl;
    cout << p2 << endl;
    cout << "Addition is: ";
    cout << p3; //invokes overloaded << operator
    cout << " \nEnter value of x for evaluating the quadratic Polynomial:" << endl;
    float x = 0;
    cin >> x;
    cout << "The value of the polynomial " << p3 << " for a given value of x = " << x << " is " << p3.eval(x) << endl;
    p3.eval(x);
    p3.solve();
    return 0;
}
