#include <iostream>
using namespace std;

int main()
{
	int A, B, V;
	cin >> A >> B >> V;

	int answer = ((V - A) % (A - B) == 0) ? (V - A) / (A - B) + 1 : (V - A) / (A - B) + 2;
	cout << answer;
}