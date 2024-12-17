#include <vector>
#include <iostream>
using namespace std;

void calTemperature(vector<float> & temperatures)
{
	for (int i = 1; i < temperatures.size(); i++)
		cout << temperatures[i] - temperatures[i - 1] << endl;
}

int main()
{
	float temperature;
	vector<float> temperatures;

	cout << fixed;
	cout.precision(2);

	while (true)
	{
		cin >> temperature;
		
		if (temperature == 999)
			break;

		temperatures.push_back(temperature);
	}

	calTemperature(temperatures);
}