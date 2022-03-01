#pragma once
#include <iostream>
#include <string>

class ExercisePlan
{
private:
	int goal;
	std::string pName;
	std::string date;

public:
	ExercisePlan(int nGoal = 0, std::string pName2 = "NULL", std::string nDate = "00/00/0000")
	{
		goal = nGoal;
		pName = pName2;
		date = nDate;
	}

	//getdata

	int getGoal() const;
	std::string getPName() const;
	std::string getDate() const;


	//setdata

	void setGoal(const int inputGoal);
	void setPlan(const std::string inputPlan);
	void setDate(const std::string inputD);


	friend std::ostream &operator<<(std::ostream &os, const ExercisePlan &a);
	friend std::ostream &operator>>(std::ostream &os, const ExercisePlan &a);


	//std::ostream& operator<<(std::ostream& os, const ExercisePlan& a);
	//std::ostream& operator>>(std::ostream& os, const ExercisePlan& a);


	//~ExercisePlan();
};
