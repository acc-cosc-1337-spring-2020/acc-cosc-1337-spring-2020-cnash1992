#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	if(hours <= 40)
	{
		double result;
		result = hours * hourly_rate;
		return result;
	}
	
	else
	{
		double result;
		result = (40 * hourly_rate);
		double overtime;
		overtime = (hours - 40)*(hourly_rate*1.5);
		double total_pay;
		total_pay = result + overtime;
		return total_pay;
	}
}
