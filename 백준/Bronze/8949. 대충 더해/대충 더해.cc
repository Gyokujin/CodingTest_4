#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> createNumbers(int &number)
{
	string sNum = to_string(number);
	vector<int> numbers;

	for (char c : sNum)
		numbers.push_back(c - 48);

	return numbers;
}

string sumVec(vector<int> &numbers1, vector<int> &numbers2)
{
	string sNum = "";
	int maxSize = max(numbers1.size(), numbers2.size());

	for (int i = numbers1.size(); i < maxSize; i++) // 길이가 짧은 numbers 벡터는 가장 앞 자리에 0을 추가한다.
		numbers1.insert(numbers1.begin(), 0);

	for (int i = numbers2.size(); i < maxSize; i++)
		numbers2.insert(numbers2.begin(), 0);

	for (int i = 0; i < maxSize; i++) // 앞자리부터 더한 후 문자열로 전환하고 추가한다. 
	{
		int sum = numbers1[i] + numbers2[i];
		sNum += to_string(sum);
	}

	return sNum;
}

int main()
{
	int A, B;
	cin >> A >> B;

	vector<int> numbersA = createNumbers(A);
	vector<int> numbersB = createNumbers(B);
	string answer = sumVec(numbersA, numbersB);
	cout << answer;
}