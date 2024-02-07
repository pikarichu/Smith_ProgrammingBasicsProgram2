// ProgrammingBasicsProgram2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program is designed to take salary data from one file labeled SalaryData.txt, apply the increase in pay
// and output the new salary to a file labeled SalaryOut.txt

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("SalaryData.txt");
	ofstream outFile;
	outFile.open("SalaryOut.txt");
	

	string lastName, firstName;
	double salary, increase, updatedSalary;

	outFile << fixed << setprecision(2) << showpoint;

	inFile >> lastName >> firstName >> salary >> increase;
	updatedSalary = ((increase / 100) * salary) + salary;
	outFile << lastName << " " << firstName << " " << updatedSalary << endl;

	inFile >> lastName >> firstName >> salary >> increase;
	updatedSalary = ((increase / 100) * salary) + salary;
	outFile << lastName << " " << firstName << " " << updatedSalary << endl;

	inFile >> lastName >> firstName >> salary >> increase;
	updatedSalary = ((increase / 100) * salary) + salary;
	outFile << lastName << " " << firstName << " " << updatedSalary << endl;

	outFile.close();
	return 0;
}
