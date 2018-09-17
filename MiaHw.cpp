
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, discriminant;

    cout << "Welcome to Rickster's Quadratic Equatino solver thingy"<<endl;
    cout << endl;
    cout << "Enter the coefficient for a: ";
    cin >> a;
    cout << endl;
    cout <<"Enter the coefficient for b: ";
    cin >>b;
    cout << endl;
    cout <<"Enter the coefficient for c: ";
    cin >> c;
    cout <<endl;

    discriminant = pow(b,2)- 4*a*c;
    x1 = (-b + sqrt(discriminant)) / (2*a);
    x2 = (-b - sqrt(discriminant)) / (2*a);

    cout <<"The roots of x are " << x1 <<" , "<<x2 <<endl;
    cout <<"Thank you, drive through."<<endl;

}
