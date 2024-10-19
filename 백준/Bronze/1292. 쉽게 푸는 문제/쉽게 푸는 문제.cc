#include <vector>
#include <iostream>
using namespace std;

int main()
{	
	vector<int> sequence;
	int answer = 0;
	int start, end;
	cin >> start >> end;

	int index = 0;

	while (index < end)
	{
		index++;

		for (int i = 0; i < index; i++)
			sequence.push_back(index);
	}

	for (int i = start; i <= end; i++)
		answer += sequence[i - 1];

	cout << answer;
}