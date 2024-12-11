#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string seminar;
		cin >> seminar;

		if (seminar == "Algorithm")
			cout << 204 << endl;
		else if (seminar == "DataAnalysis")
			cout << 207 << endl;
		else if (seminar == "ArtificialIntelligence")
			cout << 302 << endl;
		else if (seminar == "CyberSecurity")
			cout << "B101" << endl;
		else if (seminar == "Network")
			cout << 303 << endl;
		else if (seminar == "Startup")
			cout << 501 << endl;
		else if (seminar == "TestStrategy")
			cout << 105 << endl;
	}
}