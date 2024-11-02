#include <string>
#include <iostream>
using namespace std;

int main()
{
	string day;
	int N;

	cin >> day;
	cin >> N;

	int y = stoi(day.substr(0, 4));
	int m = stoi(day.substr(5, 7));
	int d = stoi(day.substr(8, 10));

	// N만큼 날짜에 더하고 달, 년 재계산
	d += N;
	m += (d - 1) / 30;
	d = (d - 1) % 30 + 1;

	y += (m - 1) / 12;
	m = (m - 1) % 12 + 1;
	printf("%d-%02d-%02d", y, m, d);
}