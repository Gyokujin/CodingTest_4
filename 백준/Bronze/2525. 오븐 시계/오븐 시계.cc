#include <iostream>
using namespace std;

int main()
{
	int hour, minute, cookingTime;

	cin >> hour >> minute;
	cin >> cookingTime;

	hour += (cookingTime / 60);
	minute += (cookingTime % 60);

	if (minute >= 60)
	{
		minute %= 60;
		hour++;
	}

	if (hour >= 24) 
	{
		hour %= 24;
	}

	cout << hour << " " << minute;
}