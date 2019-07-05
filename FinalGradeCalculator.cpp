//FinalGrade.cpp - Calculates a students final grade in the class
//Created by Kwesi Owubah on 07/05/2019

#include <iostream>
#include <cmath>
using namespace std;

//function prototype 
double finalNeeded(double, double, double);

int main()
{
	//declare variables
	double currGrade;
	double finWorth;
	double gradeObjective;

	double result = 0.0;

	//get the required information for calculation
	cout << "Current grade: ";
	cin >> currGrade;
	cout << "What percent is the final worth? ";
	cin >> finWorth;
	cout << "What grade (at least) do you want in the class? ";
	cin >> gradeObjective;

	//call function to calculate the necessary grade
	result = finalNeeded(currGrade, finWorth, gradeObjective);

	//display the result
	cout << "The grade you need on your final to at least get a(n) " << gradeObjective << " is: "
		<< result << endl;

	system("pause");
	return 0;
}	//end of main function


//*****function definition***** 
double finalNeeded(double current, double worth, double objective) {
	double val = 0.0;
	double worthP = worth / 100;
	val = (objective - ((1 - worthP) * current)) / worthP;
	return val;
}

// F = ( G - ((1-w) x C) )/w
