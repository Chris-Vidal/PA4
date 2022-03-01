#include "ExcercisePlan.h"

//ExercisePlan::ExercisePlan(int nGoal = 0, std::string pName2 = "NULL", std::string nDate = "00/00/0000")
//{
//	goal = nGoal;
//	pName = pName2;
//	date = nDate;
//}

int ExercisePlan::getGoal() const
{
	return goal;
}
std::string ExercisePlan::getPName() const
{
	return pName;
}
std::string ExercisePlan::getDate() const
{
	return date;
}


//setdata

void ExercisePlan::setGoal(const int inputGoal)
{
	goal = inputGoal;
}
void ExercisePlan::setPlan(const std::string inputPlan)
{
	pName = inputPlan;
}
void ExercisePlan::setDate(const std::string inputD)
{
	date = inputD;
}

//
//std::ostream& operator<<(std::ostream& os, const ExercisePlan& a)
//{
//
//}
//friend std::ostream& operator>>(std::ostream& os, const ExercisePlan& a);

std::ostream& operator<<(std::ostream &os, const ExercisePlan &a)
{
	//cout << " " << endl;
	return os;
}

std::ostream& operator>>(std::ostream &os, const ExercisePlan &a)
{
	return os;
}

//ExercisePlan::~ExercisePlan()
//{
//}
