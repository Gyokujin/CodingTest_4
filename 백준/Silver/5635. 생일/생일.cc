#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool youngCheck(int input[], int young[])
{
	bool isYoung = false;

	if (input[2] > young[2])
		isYoung = true;
	else if (input[2] == young[2] && input[1] > young[1])
		isYoung = true;
	else if (input[2] == young[2] && input[1] == young[1] && input[0] > young[0])
		isYoung = true;

	return isYoung;
}

bool oldCheck(int input[], int old[])
{
	bool isOld = false;
	
	if (input[2] < old[2])
		isOld = true;
	else if (input[2] == old[2] && input[1] < old[1])
		isOld = true;
	else if (input[2] == old[2] && input[1] == old[1] && input[0] < old[0])
		isOld = true;

	return isOld;
}

int main()
{
	int index = 0;
	cin >> index;

	string inputName;
	int inputBirth[3];

	string youngName, oldName;
	int youngBirth[3]{ 0,0,0 };
	int oldBirth[3]{ 0, 0, 0 };

	for (int i = 0; i < index; i++)
	{
		cin >> inputName;
		cin >> inputBirth[0];
		cin >> inputBirth[1];
		cin >> inputBirth[2];

		if (i == 0)
		{
			youngName = inputName;
			oldName = inputName;

			youngBirth[0] = oldBirth[0] = inputBirth[0];
			youngBirth[1] = oldBirth[1] = inputBirth[1];
			youngBirth[2] = oldBirth[2] = inputBirth[2];
		}
		else
		{
			if (youngCheck(inputBirth, youngBirth))
			{
				youngName = inputName;
				youngBirth[0] = inputBirth[0];
				youngBirth[1] = inputBirth[1];
				youngBirth[2] = inputBirth[2];
			}

			if (oldCheck(inputBirth, oldBirth))
			{
				oldName = inputName;
				oldBirth[0] = inputBirth[0];
				oldBirth[1] = inputBirth[1];
				oldBirth[2] = inputBirth[2];
			}
		}
	}

	cout << youngName << endl;
	cout << oldName << endl;
}