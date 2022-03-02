#include "DietPlan.h"
#include <iostream>

//DietPlan::DietPlan(int newCal = 0, std::string pName = "NULL", std::string nDate = "00/00/0000")
//{
//	calories = newCal;
//	planName = pName;
//	date = nDate;
//}

//std::ostream& operator<<(std::ostream& os, const DietPlan& a)
//{
//	std::cout << a.getCal() << std::endl;
//	return os;
//}

//std::ostream& operator>>(std::ostream& os, const DietPlan& a)
//{
//	return os;
//}

int DietPlan::getCal() const
{
	return calories;
}
std::string DietPlan::getPlan() const
{
	return planName;
}
std::string DietPlan::getDate() const
{
	return date;
}


//setdata

void DietPlan::setCal(int inputCal)
{
	calories = inputCal;
}
void DietPlan::setPlan(std::string inputPlan)
{
	planName = inputPlan;
}
void DietPlan::setDate(std::string inputD)
{
	date = inputD;
}