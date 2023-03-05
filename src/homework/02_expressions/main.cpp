//write include statements
#include "hwexpressions.cpp"
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;



int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	cout << "Enter Meal Amount: ";
	cin >> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout << "Enter Tip Percentage: ";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = tip_amount + tax_amount + meal_amount;
	cout << "Meal Amount\t" << meal_amount << "\nSales Tax\t" << tax_amount << "\nTip Amount\t" << tip_amount << "\nTotal\t\t"<< total <<"\n";

	return 0;
}
