#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string K;
		cin >> K;
		
		int lastNum = int(K[K.size() - 1]) - 48;
		cout << (lastNum % 2 != 0 ? "odd" : "even") << endl;
	}
}