#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int N;
	cin >> N;
	vector<pair<int, string>> members(N);

	for (int i = 0; i < members.size(); i++)
		cin >> members[i].first >> members[i].second;

	stable_sort(members.begin(), members.end(), compare);

	for (pair<int, string> member : members)
		cout << member.first << ' ' << member.second << "\n";
}