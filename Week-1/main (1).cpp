#include <iostream>
#include <vector>
using namespace std;

void calcPayroll(float &payrollTotal, int &overtimeCount) {
	int numEmployees;

	cout << "Enter total number of employees: ";
	cin >> numEmployees;

	vector<float> hours(numEmployees);
	vector<float> rates(numEmployees);

	for (int i = 0; i < numEmployees; i++) {
		cout << "Employee " << (i + 1) << ":" << endl;

		cout << "Enter hours worked: ";
		cin >> hours[i];

		cout << "Enter hourly rate: ";
		cin >> rates[i];

		float salary = hours[i] * rates[i];
		payrollTotal += salary;

		if (hours[i] > 40) {
			overtimeCount++;
		}
	}
}

int main() {
	float payrollTotal = 0;
	int overtimeCount = 0;

	calcPayroll(payrollTotal, overtimeCount);

	cout << "Total Payroll for the Week: $" << payrollTotal << endl;
	cout << "Number of Employees with Overtime: " << overtimeCount << endl;

	return 0;
}
