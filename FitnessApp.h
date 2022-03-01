#pragma once
#include <iostream>
#include <fstream>
#include <vector>

#include "ExcercisePlan.h"
#include "DietPlan.h"
#include "ExcercisePlan.h"

using std::cout;
using std::endl;

class FitnessAppWrapper
{
private:
	//In here we can put a linked list, vecotr, or array.
	DietPlan alpha[7];
	ExercisePlan beta[7];


public:
	FitnessAppWrapper();

	void runApp(void);

	void loadDailyPlan(std::ifstream &fileStream, DietPlan &plan);
	void loadExercisePlan(std::ifstream &fileStream, ExercisePlan &plan);

	//Should load loadDailyPlan directly
	void loadWeeklyDPlan(std::ifstream &fileStream);
	void loadWeeklyEPlan(std::ifstream &fileStream);
	
	//store weekly diet/excercise plan
	// 
	void storeDF();
	void storeEF();
	void storeWDF();
	void storeWEF();
	//displayDailyPlan();

	//storeDailyplan()

	//storeWeeklyPlan()

	void mainMenu();


	//Edit daily diet plan
	//Edit  daily excercise plan
	// 
	//exit();
	//~FitnessAppWrapper();

	//friend std::ostream& operator<<(std::ostream& os, const DietPlan& a);
	//friend std::ostream& operator>>(std::ostream& os, const DietPlan& a);


};
