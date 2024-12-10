#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int answer = N * (N - 1) * (N - 2) * (N - 3) / 24; // 서로 다른 N개중에 4개를 선택하는 경우의 수 = N! / ((N - 4)! * 4!)
	cout << answer;
}