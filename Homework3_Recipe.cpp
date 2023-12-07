// Raymond Bryant Jr.
// CIS 2541 - Homework 3: Recepie
// 09/12/21

// Let's make garlic cheese breadsticks! 
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	
	// Ask user for the quantity of breadsticks
	int breadSticks;
	cout << "Hello & Welcome! How many breadsticks would you like? ";
	cin >> breadSticks;

	// Display the quantity of breadsticks
	cout << "Here is the quantity of ingredients needed to make " << breadSticks << " breadsticks " << endl;

	// Ingredients to make breadsticks
	double Orders = (breadSticks / 6.0);
	int butterStick = 6;
	double FrenchBreadLoaf = 6;
	double garlicCloves = 6;
	double mozBalls = 6;
	int parsley = 6;

	// Perform calculation for quantity of ingredients it will take to make a certain number of breadsticks
	int average = butterStick / breadSticks;
	int average2 = FrenchBreadLoaf / breadSticks;
	double average3 = garlicCloves / breadSticks;
	double average4 = mozBalls / breadSticks; 
	int average5 = parsley / breadSticks;

	// Display quantity of ingredients needed to make the quantity of breadsticks
	cout << "Sticks of Butter " << average << endl;
	cout << "Loaf of Bread " << average2 << endl;
	cout << "Cloves of Garlic " << average3 << endl;
	cout << "Mozzarella Balls " << average4 << endl;
	cout << "Parsley " << average5 << endl;
	
	system("PAUSE");
	return 0;

}