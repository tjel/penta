# include <iostream>
#include <cmath>

using namespace std;

int main( ) 
{ 
    double a; 
    cout<< "Enter a: "; 
    cin>>a;
 
    cout<< "Perimeter of the pentagon is: "<< 5*a << endl; 
    cout<< "Area of the pentagon is: " << 5*a*a*sqrt(3)/4 << endl;
    return 0;
} 
