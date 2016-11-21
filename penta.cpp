# include <iostream>
#include <cmath>

using namespace std;

int main( ) 
{ 
    double a; 
    cout<< "Enter a"; 
    cin>>a;
    if(a < 0)
    {
        cout<< "The value of a has to be positive.\n";
	return 0;
    } 
    cout<< "Perimeter of the pentagon is: "<< 5*a; 
    cout<< "Area of the pentagon is:" << 5*a*a*sqrt(3)/4;
    return 0;
} 
