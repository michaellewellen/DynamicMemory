// DynamicMemory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	SalesFunction();
	return 0;
}

void SalesFunction()
{
	double* sales = nullptr,
		total = 0.0,
		average;
	int numDays, count;

	cout << "How many days of sales figures do you wish ";
	cout << "to process? ";
	cin >> numDays;

	sales = new double[numDays];

	cout << "Enter the sales figures below.\n";
	for (count = 0; count < numDays; count++)
	{
		cout << "Day " << (count + 1) << ": ";
		cin >> sales[count];
		total += sales[count];
	}

	average = total / numDays;
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\nTotal Sales: $" << total << endl;
	cout << "Average Sales: $" << average << endl;

	delete[] sales;
	sales = nullptr;
	

}

