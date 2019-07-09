#include <iostream>
using namespace std;
int main()

{
	int Celsius ,Fahrenheit;
	cout << "Enter Celsius temperature : ";
	cin >> Celsius;
	Fahrenheit = (1.8 * Celsius) + 32;
	cout << "" << endl;
	cout << "Fahrenheit = " << Fahrenheit << endl;
	cout << "" << endl;
	cout << Fahrenheit << "is"  << (Fahrenheit > 70 ? "Now weather in thailand is HOT":"Now weather in thailand is COOL");
	cout << "" << endl;
	return(0);
}