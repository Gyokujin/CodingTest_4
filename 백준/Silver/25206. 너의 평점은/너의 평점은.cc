#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string subject;
	string credit;
	double average = 0;
	
	float sum;
	double score;
	float grade;

	for (int i = 0; i < 20; i++)
	{
		cin >> subject >> grade >> credit;

		if (credit == "A+")
			score = 4.5f;
		else if (credit == "A0")
			score = 4.0f;
		else if (credit == "B+")
			score = 3.5f;
		else if (credit == "B0")
			score = 3.0f;
		else if (credit == "C+")
			score = 2.5f;
		else if (credit == "C0")
			score = 2.0f;
		else if (credit == "D+")
			score = 1.5f;
		else if (credit == "D0")
			score = 1.0f;
		else if (credit == "F")
			score = 0.0f;
		else if (credit == "P")
		{
			score = 0.0f;
			grade = 0;
		}

		average += (score * grade);
		sum += grade;
	}

	average /= sum;
	cout << average;
}