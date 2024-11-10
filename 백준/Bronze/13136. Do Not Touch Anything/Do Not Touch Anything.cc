#include <iostream>
using namespace std;

int main()
{
	long long R, C, N;
	cin >> R >> C >> N;

	long long width = R % N == 0 ? R / N : R / N + 1;
	long long height = C % N == 0 ? C / N : C / N + 1;

	cout << width * height;
}