#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int count = 0;
		int N, K;
		cin >> N >> K;

		vector<int> requests(N);

		for (int j = 0; j < N; j++)
			cin >> requests[j];

		for (int request : requests)
			count += request / K;

		cout << count << endl;
	}
}