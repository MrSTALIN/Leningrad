# Leningrad
SLT-Vector

#include <iostream>
#include <vector>
#include "stdafx.h"
#include <windows.h>
#include <math.h>

using namespace std;

void isEmpty(bool ifEmpty);

int main()
{
	double variable;
	int sizeOfVector;

	cout << "What size should be both vectors: "; cin >> sizeOfVector;

	vector<int> first_vector;
	vector<int>	second_vector;

	cout << "Enter variables for the First vector :" << endl;
	for (int i = 0; i < sizeOfVector; i++)
	{
		cin >> variable;
		first_vector.push_back(variable);
	}
	cout << "\n\n";
	cout << "Enter variables for the Second vector :" << endl;
	for (int i = 0; i < sizeOfVector; i++)
	{
		cin >> variable;
		second_vector.push_back(variable);
	}
	isEmpty(first_vector.empty());

	cout << "\n\tChecking if both vectors has the same size..." << endl;
	Sleep(2000);

	if (first_vector.size() == second_vector.size())
		cout << "\nVectors has got the same SIZE";
	else cout << "\nNeither one is the same size!!!";

	cout << "\nCreating another Vector" << endl;
	vector <int> third_vector(sizeOfVector);

	cout << "\nNow will be shown all of the operations on Vectors + - * " << endl;
	
	cout << "\t\nAddition" << endl << endl;

	for (int i = 0; i < sizeOfVector; i++)
		third_vector[i] = first_vector[i] + second_vector[i];		
	cout << "V3 = [";
	for (int i = 0; i < third_vector.size(); i++)
		cout << third_vector[i] << " ; ";
	cout << "\b\b\b]" << endl;
		
	cout << "\t\nSubtraction" << endl << endl;

	for (int i = 0; i < sizeOfVector; i++)
		third_vector[i] = first_vector[i] - second_vector[i];
	cout << "V3 = [";
	for (int i = 0; i < third_vector.size(); i++)
		cout << third_vector[i] << " ; ";
	cout << "\b\b\b]" << endl;
	
	cout << "\t\nMultiplication" << endl << endl;

	for (int i = 0; i < sizeOfVector; i++)
		third_vector[i] = first_vector[i] * second_vector[i];
	cout << "V3 = [";
	for (int i = 0; i < third_vector.size(); i++)
		cout << third_vector[i] << " ; ";
	cout << "\b\b\b]" << endl;
	
	if (sizeOfVector==2)
	{
		static double angle;
		double lenght_first_vector, lenght_second_vector;
		lenght_first_vector = sqrt(pow(first_vector[0], 2)+ pow(first_vector[1],2));
		lenght_second_vector = sqrt(pow(second_vector[0], 2)+ pow(second_vector[1],2));
		angle = ((first_vector[0] * second_vector[0]) + (first_vector[1] * second_vector[1])) / (lenght_first_vector*lenght_second_vector);
		cout << "\n Angle between the First vector and the Second vector = " << angle << endl;
	}
	else
	{
		cout << "\t\n\nEntered Vectors are not two dimensional!!!" << endl;
	}
	

	getchar(); getchar();
	third_vector.clear();
	system("cls");
	main();
}


void isEmpty(bool ifEmpty)
{printf("%s\n", ifEmpty ? "\nVector is EMPTY" : "\nVector has got some data");}
