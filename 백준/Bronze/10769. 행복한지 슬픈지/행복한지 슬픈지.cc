#include <string>
#include <iostream>
using namespace std;

void emoticonCheck(string &input)
{
	if (input.size() < 3)
	{
		cout << "none";
		return;
	}

	bool useEmotion = false; // 한 번이라도 이모티콘을 사용했다면 true로 전환
	int emotion = 0; // 양수면 기쁨. 음수면 슬픔

	for (int i = 0; i < input.size() - 2; i++)
	{
		if (input[i] == ':')
		{
			if (input[i + 2] == ')')
			{
				emotion++;

				if (!useEmotion)
					useEmotion = true;
			}
			else if (input[i + 2] == '(')
			{
				emotion--;

				if (!useEmotion)
					useEmotion = true;
			}
		}
	}

	if (!useEmotion)
		cout << "none";
	else
	{
		if (emotion > 0)
			cout << "happy";
		else if (emotion == 0)
			cout << "unsure";
		else
			cout << "sad";
	}
}

int main()
{
	string input;
	getline(cin, input);
	emoticonCheck(input);
}