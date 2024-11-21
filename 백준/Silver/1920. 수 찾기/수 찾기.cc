#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> numbers1(N);

	for (int i = 0; i < numbers1.size(); i++)
		cin >> numbers1[i];

	int M;
	cin >> M;
	vector<int> numbers2(M);

	for (int i = 0; i < numbers2.size(); i++)
		cin >> numbers2[i];

	sort(numbers1.begin(), numbers1.end());

	for (int num : numbers2)
	{
		if (binary_search(numbers1.begin(), numbers1.end(), num))
			cout << 1;
		else
			cout << 0;

		cout << "\n";
	}
}