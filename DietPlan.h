#pragma once
#include <string>

class DietPlan
{
private:
	int calories; //Max intake Calories
	std::string planName;
	std::string date;
public:
	//Constructor
	DietPlan(int newCal = 0, std::string pName = "NULL", std::string nDate = "00/00/0000")
	{
		calories = newCal;
		planName = pName;
		date = nDate;
	}

	//getdata

	int getCal() const;
	std::string getPlan() const;
	std::string getDate() const;


	//setdata

	void setCal(const int inputCal);
	void setPlan(const std::string inputPlan);
	void setDate(const std::string inputD);

	//friend std::ostream& operator<<(std::ostream& os, const DietPlan& a);
	//friend std::ostream& operator>>(std::ostream& os, const DietPlan& a);

	//~DietPlan();

};