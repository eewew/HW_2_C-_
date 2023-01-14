// HW_2_C++_.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "\n";
	cout << "\tTask 1\n";
	cout << "\n";
	float R1;
	float R2;
	float R3;
	cout << "Input value of R1="; cin >> R1; "\n"; 
	cout << "Input value of R2="; cin >> R2; "\n";
	cout << "Input value of R3="; cin >> R3; "\n";
	float R0_divided;
	R0_divided= (1 / R1) + (1 / R2) + (1 / R3);
	float R0 = 1 / R0_divided;
	cout << "\n";
	cout << "\tR0="<< R0;
	cout << "\n";
	cout << "\n";
	cout << "\tTask 2\n";
	cout << "\n";
	float L;
	cout << "Input value of L="; cin >> L; "\n";
	const float pi = 3.14;
	float R;
	R = L / 2 * pi;
	float S;
	S = pi * R * R;
	cout << "\n";
	cout << "\tS=" << S; "\n";
	cout << "\n";
	cout << "\n";
	cout << "\tTask 3\n";
	cout << "\n";
	float v=20;
	float t=20;
	float a=0.25;
	float s;
	s = (v * t + (a * t * t)) / 2;
	cout << "\ts=" << s; "\n";
	cout << "\n";
	cout << "\n";
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
