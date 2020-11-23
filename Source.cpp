/* a program that hacks and steals money
11/22/2020
Jacob Schatzer
*/

#include <iostream>

using namespace std;
// function prototype (declaration)
void normalTransaction(int x, int y);

// function prototype (declaration)
void hackedTransaction(int& x, int& y);

// main function
int main()
{
	// UAT college Account Balance
	int UATCollegeAccount = 12;

	// Some Other School Account Balance
	int otherSchoolAccount = 97349739;

	cout << "          Bank of Other School" << endl;
	cout << "------------------------------------" << endl;
	cout << "------------------------------------" << endl;
	cout << "\n         Account Balances" << endl;
	cout << "____________________________________\n" << endl;
	cout << "UAT College Account: $" << UATCollegeAccount << endl;
	cout << "Terrorist Account:        $" << otherSchoolAccount << "\n\n" << endl;

	cout << "Calling normalTransaction()\n";

	// Call the function normalTransaction with the integers <UATCollegeAccount> and <otherSchoolAccount>
	normalTransaction(UATCollegeAccount, otherSchoolAccount);

	cout << "UAT College Account: $" << UATCollegeAccount << "\n";
	cout << "Other School Account:        $" << otherSchoolAccount << "\n\n";
	cout << "Calling hackedTransaction()\n";

	// Call the function hackedTransaction with the integers <UATCollegeAccount> and <otherSchoolAccount>
	hackedTransaction(UATCollegeAccount, otherSchoolAccount);

	cout << "UAT College Account: $" << UATCollegeAccount << "\n";
	cout << "other School Account:        $" << otherSchoolAccount << "\n";

	// Return a value of 0
	return 0;
}

// Function definition
void normalTransaction(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

// Function definition
void hackedTransaction(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}