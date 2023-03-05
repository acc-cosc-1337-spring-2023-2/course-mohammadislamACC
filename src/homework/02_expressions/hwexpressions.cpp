
#include "hwexpressions.h"

double get_sales_tax_amount(double meal_amount)
{
    const double tax_rate = 0.0675;
    return tax_rate * meal_amount;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
    return (tip_rate/100) * meal_amount;
}


