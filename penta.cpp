# include <iostream>
#include <cmath>

using namespace std;

int main( ) 
{ 
	//inicjalizacja zmiennych
    double a; 

	//pobranie a
    cout<< "Enter a"; 
    cin>>a;
 
	//obliczenia i wyjscie
    cout<< "Perimeter of the pentagon is: "<< 5*a; 
    cout<< "Area of the pentagon is:" << 5*a*a*sqrt(3)/4;
    return 0;
} 
