#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	vector<int> lengths(3);

	for (int i = 0; i < lengths.size(); i++)
		cin >> lengths[i];

	sort(lengths.begin(), lengths.end());

	if (lengths[0] + lengths[1] > lengths[2])
		answer = lengths[0] + lengths[1] + lengths[2];
	else if (lengths[0] + lengths[1] == lengths[2])
		answer = lengths[0] + lengths[1] + lengths[2] - 1;
	else
		answer = (lengths[0] + lengths[1]) * 2 - 1;

	cout << answer;
}