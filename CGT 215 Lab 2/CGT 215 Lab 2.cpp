#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float x;
	/*cout << "Please enter a value for A: ";   //Asks for input value
	cin >> A;                                   //Sets A to the user input
	cout << "A=" << A << endl;                  //Takes user input and prints "A=(whatever user entered)" 
	B = (A * 4) + 1;                            //Uses example equation to give B a value
	cout << "And B=" << B << endl;              //Prints what B equals after the equation    */
	cout << "Hello! Let's solve the equation:" << endl;
	cout << "Ax + B = 0" << endl;
	cout << "For the variable x" << endl;
	cout << endl;

	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Alright, so A=" << A << "." << endl;
	cout << endl;

	cout << "Now please enter a value for B: ";
	cin >> B;
	cout << "Nice, so now B=" << B << "." << endl;
	cout << endl;

	cout << "Now solving the equation: " << A << "x" << "+" << B << "=0..." << endl;

	x = (0 - B) / A;

	cout << " The variable x= " << x << " in this equation" << endl;


}