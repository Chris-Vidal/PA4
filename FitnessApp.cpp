#include "FitnessApp.h"

FitnessAppWrapper::FitnessAppWrapper()
{
	//for (int i = 0; i < 7; i++)
	//{
	//	dietData[i].setCal(0);
	//	exerciseData[i].setGoal(0);
	//	dietData[i].setPlan("NUM");
	//	exerciseData[i].setPlan("NUM");
	//	dietData[i].setDate("00/00/0000");
	//	exerciseData[i].setDate("00/00/0000");
	//}
}


void FitnessAppWrapper::loadDailyPlan(std::ifstream &fileStream, DietPlan &a)
{

	//for (int temp = 0; temp < 7; temp++)
	//{

	//	int tempNum;
	//	std::string splan;
	//	std::string stuff;
	//	getline(fileStream, splan);
	//	fileStream >> tempNum;
	//	fileStream >> stuff;

	//	alpha[temp].setCal(tempNum);
	//	alpha[temp].setPlan(splan);
	//	alpha[temp].setDate(stuff);

	//	//getline(fileStream, splan, '\n');
	//	getline(fileStream, splan);
	//	getline(fileStream, splan);

	//}
	//fileStream.close();
}


void FitnessAppWrapper::loadExercisePlan(std::ifstream &fileStream, ExercisePlan &plan)
{
	//for (int temp = 0; temp < 7; temp++)
	//{

	//	int tempNum;
	//	std::string eplan;
	//	std::string stuff;
	//	getline(fileStream, eplan);
	//	fileStream >> tempNum;
	//	fileStream >> stuff;

	//	beta[temp].setGoal(tempNum);
	//	beta[temp].setPlan(eplan);
	//	beta[temp].setDate(stuff);

	//	//getline(fileStream, splan, '\n');
	//	getline(fileStream, eplan);
	//	getline(fileStream, eplan);
	//}
	//fileStream.close();
}

//Should load loadDailyPlan directly
void FitnessAppWrapper::loadWeeklyDPlan(std::ifstream &fileStream)
{
	for (int temp = 0; temp < 7; temp++)
	{

		int tempNum;
		std::string splan;
		std::string stuff;
		getline(fileStream, splan);
		fileStream >> tempNum;
		fileStream >> stuff;

		alpha[temp].setCal(tempNum);
		alpha[temp].setPlan(splan);
		alpha[temp].setDate(stuff);

		//getline(fileStream, splan, '\n');
		getline(fileStream, splan);
		getline(fileStream, splan);

	}
	fileStream.close();

}
void FitnessAppWrapper::loadWeeklyEPlan(std::ifstream &fileStream)
{
	for (int temp = 0; temp < 7; temp++)
	{

		int tempNum;
		std::string eplan;
		std::string stuff;
		getline(fileStream, eplan);
		fileStream >> tempNum;
		fileStream >> stuff;

		beta[temp].setGoal(tempNum);
		beta[temp].setPlan(eplan);
		beta[temp].setDate(stuff);

		//getline(fileStream, splan, '\n');
		getline(fileStream, eplan);
		getline(fileStream, eplan);
	}
	fileStream.close();
}

//store weekly diet/excercise plan



std::ostream& operator<<(std::ostream& os, const DietPlan* a)
{
	for (int i = 0; i < 7; i++)
	{
		cout << a[i].getCal() << endl;
		cout << a[i].getPlan() << endl;
		cout << a[i].getDate() << endl;
	}

	return os;
}



std::ostream& operator<<(std::ostream& os, const ExercisePlan b[])
{
	for (int i = 0; i < 7; i++)
	{
		cout << b[i].getGoal() << endl;
		cout << b[i].getPName() << endl;
		cout << b[i].getDate() << endl;

	}

	return os;
}

//std::ostream& operator>>(std::ostream& os, const ExercisePlan& a)
//{
//	return os;
//}

void FitnessAppWrapper::storeDF()
{

}

void FitnessAppWrapper::storeEF()
{

}

//template <class T>
//void FitnessAppWrapper::store(const T &t)
//{
//
//}
//
//template<>
//void FitnessAppWrapper::store(const DietPlan& t)
//{
//	std::ofstream store;
//
//	store.open("storeDietFile.txt");
//	for (int temp = 0; temp < 7; temp++)
//	{
//		store << alpha[temp].getCal() << std::endl;
//		store << alpha[temp].getPlan() << std::endl;
//		store << alpha[temp].getDate() << std::endl;
//		store << std::endl;
//	}
//	store.close();
//}
//
//template<>
//void FitnessAppWrapper::store(const ExercisePlan& t)
//{
//	std::ofstream store;
//
//	store.open("storeDietFile.txt");
//	for (int temp = 0; temp < 7; temp++)
//	{
//		store << beta[temp].getGoal() << std::endl;
//		store << beta[temp].getPName() << std::endl;
//		store << beta[temp].getDate() << std::endl;
//		store << std::endl;
//	}
//	store.close();
//}

void FitnessAppWrapper::storeWDF()
{
	std::ofstream store;

	store.open("storeDietFile.txt");
	for (int temp = 0; temp < 7; temp++)
	{
		store << alpha[temp].getCal() << std::endl;
		store << alpha[temp].getPlan() << std::endl;
		store << alpha[temp].getDate() << std::endl;
		store << std::endl;
	}
	store.close();
}
//
void FitnessAppWrapper::storeWEF()
{
	std::ofstream store;

	store.open("storeExcerciseFile.txt");
	for (int temp = 0; temp < 7; temp++)
	{
		store << beta[temp].getGoal() << std::endl;
		store << beta[temp].getPName() << std::endl;
		store << beta[temp].getDate() << std::endl;
		store << std::endl;
	}
	store.close();
}

void FitnessAppWrapper::displayD()const
{
	cout << alpha << endl;
}

void FitnessAppWrapper::displayE() const
{
	cout << beta << endl;
}


void FitnessAppWrapper::editD(int & record)
{
	cout << "DIET DATA EDITING:" << endl;
	int index = 0;
	index = record - 1;

	int inputCal;
	std::string inputPlan;
	std::string inputDate;

	cout << "Input new calories: ";
	std::cin >> inputCal;
	cout << endl;
	cout << "Input new plan name: ";
	std::cin >> inputPlan;
	cout << endl;
	cout << "Input new date: ";
	std::cin >> inputDate;
	cout << endl;

	alpha[index].setCal(inputCal);
	alpha[index].setPlan(inputPlan);
	alpha[index].setDate(inputDate);

}

void FitnessAppWrapper::editE(int & record)
{
	cout << "EXERCISE DATA EDITING:" << endl;
	int index = 0;
	index = record - 1;

	int inputGoal;
	std::string inputPlan;
	std::string inputDate;

	cout << "Input new goal: ";
	std::cin >> inputGoal;
	cout << "Input new plan name: ";
	std::cin >> inputPlan;
	cout << "Input new date: ";
	std::cin >> inputDate;

	beta[index].setGoal(inputGoal);
	beta[index].setPlan(inputPlan);
	beta[index].setDate(inputDate);

}



void FitnessAppWrapper::exitP()
{
 	exit(-1);
}
//FitnessAppWrapper::~FitnessAppWrapper()


void FitnessAppWrapper::mainMenu()
{
	int input = 0;
	std::cout << "Welcoe to the fitness app, what would you like to do?" << std::endl;
	std::cout << "1. Load weekly diet plan from file" << std::endl;
	std::cout << "2. Load weekly exerecise plan from file" << std::endl;
	std::cout << "3. Store weekly diet plan to file" << std::endl;
	std::cout << "4. Store weekly excercise plan from file" << std::endl;
	std::cout << "5. Display weekly diet plan to screen" << std::endl;
	std::cout << "6. Display weekly excercise plan to screen" << std::endl;
	std::cout << "7. Edit weekly diet plan to screen" << std::endl;
	std::cout << "8. Edit weekly excercise plan to screen" << std::endl;
	std::cout << "9. exit" << std::endl;

	std::cin >> input;

	while (input < 1 || input > 9)
	{
		std::cout << "Err: please try again" << std::endl;
		std::cin >> input;

	}
	
	std::ifstream file;

	switch (input)
	{
	case 1:
		std::cout << "1. Load weekly diet plan from file" << std::endl;
		file.open("dietPlans.txt");
		if (!file.is_open())
		{
			cout << "File failed to open!" << endl;
		}
		loadWeeklyDPlan(file);
		mainMenu();
	case 2:
		std::cout << "2. Load weekly exercise plan from file" << std::endl;
		file.open("exercisePlans.txt");
		if (!file.is_open())
		{
			cout << "File failed to open!" << endl;
		}
		loadWeeklyEPlan(file);
		mainMenu();

	case 3:
		std::cout << "3. Store weekly diet plan to file" << std::endl;
		//store(alpha);
		storeWDF();
		mainMenu();

	case 4:
		std::cout << "4. Store weekly excercise plan to file" << std::endl;
		storeWEF();
		//store(beta);
		mainMenu();

	case 5:
		std::cout << "5. Display weekly diet plan" << std::endl;
		//cout << alpha << endl;
		displayD();
		mainMenu();

	case 6:
		std::cout << "6. Display weekly excercise plan" << std::endl;
		displayE();
		mainMenu();

	case 7:
		std::cout << "7. Edit weekly diet plan from file" << std::endl;
		cout << "Which day would you like to edit?" << endl;
		cout << "Monday = 1" << endl;
		cout << "Tuesday = 2" << endl;
		cout << "Wednesday = 3" << endl;
		cout << "Thursday = 4" << endl;
		cout << "Friday = 5" << endl;
		cout << "Saturday = 6" << endl;
		cout << "Sunday = 7" << endl;

		int record1;
		std::cin >> record1;

		while (record1 < 1 || record1 > 7)
		{
			std::cout << "Err: please try again" << std::endl;
			std::cin >> record1;
		}

		editD(record1);
		mainMenu();

	case 8:
		std::cout << "1. Edit weekly exercise plan from file" << std::endl;
		cout << "Which day would you like to edit?" << endl;
		cout << "Monday = 1" << endl;
		cout << "Tuesday = 2" << endl;
		cout << "Wednesday = 3" << endl;
		cout << "Thursday = 4" << endl;
		cout << "Friday = 5" << endl;
		cout << "Saturday = 6" << endl;
		cout << "Sunday = 7" << endl;

		int record2;
		std::cin >> record2;

		while (record2 < 1 || record2 > 7)
		{
			std::cout << "Err: please try again" << std::endl;
			std::cin >> record2;
		}

		editE(record2);
		mainMenu();

	case 9:
		std::cout << "9. Exit" << std::endl;
		storeWDF();
		storeWEF();
		exitP();
	}
}

//fgets for c++ is getline()

void FitnessAppWrapper::runApp(void)
{
	mainMenu();

}