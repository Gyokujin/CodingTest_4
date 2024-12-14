#include <map>
#include <iostream>
using namespace std;

bool checkAlphabets(string &input1, string &input2)
{
	if (input1.size() == input2.size()) // 같은 알파벳들을 사용했다면 길이는 같아야 한다
	{
		map<char, int> alphabets1;
		map<char, int> alphabets2;

		for (char c : input1)
			alphabets1[c]++;

		for (char c : input2)
			alphabets2[c]++;

		bool isSame = true;

		for (map<char, int>::iterator it = alphabets1.begin(); it != alphabets1.end(); it++)
		{
			if (it->second != alphabets2[it->first]) // map을 키와 값으로 보았을 때, 첫 번째 map은 값을, 두 번째 map은 키로 접근한 값이 같은지 확인(결국 두 값을 비교한 것과 같다)
			{
				isSame = false;
				break;
			}
		}

		if (isSame)
			return true;
	}

	return false;
}

int main()
{
	string input1;
	string input2;
	int count = 1;

	while (true)
	{
		cin >> input1;
		cin >> input2;

		if (input1 == "END" && input2 == "END")
			break;
		
		cout << "Case " << count << ": ";
		cout << (checkAlphabets(input1, input2) ? "same" : "different") << endl;
		count++;
	}
}