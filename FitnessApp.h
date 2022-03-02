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
	//template <class T>
	//void store(const T &temp);

	void storeDF();
	void storeEF();
	void storeWDF();
	void storeWEF();
	void displayD() const;
	void displayE() const;
	void editD(int &);
	void editE(int &);

	void mainMenu();

	void exitP();

	//Edit daily diet plan
	//Edit  daily excercise plan
	// 
	//exit();
	//~FitnessAppWrapper();

	friend std::ostream& operator<<(std::ostream& os, const DietPlan* a);
	friend std::ostream& operator<<(std::ostream& os, const ExercisePlan b[]);
	//friend std::ostream& operator>>(std::ostream& os, const DietPlan b[]);
	//template<typename T>
	//friend std::ostream& operator<< (std::ostream& os, const T& obj)
	//{
	//	return os;
	//}

	//template<>
	//friend std::ostream& operator<< <DietPlan> (std::ostream&, const T <DietPlan>&)
	//{
	//	for (int i = 0; i < 7; i++)
	//	{
	//		cout << a[i].getCal() << endl;
	//	}

	//	return os;
	//}
	//template<>
	//std::ostream& operator<< <ExercisePlan>(const ExercisePlan b[])
	//{
	//	return os;
	//}

	//template <>
	//friend std::ostream& operator<< <DietPlan>(std::ostream& os, const T obj);
	//template <typename T>
	//friend std::ostream& operator<< <ExercisePlan>(std::ostream& os, const T<ExercisePlan> obj[]);

	//friend std::ostream& operator>>(std::ostream& os, const DietPlan b[]);


};
