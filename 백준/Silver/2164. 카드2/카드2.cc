#include <queue>
#include <iostream>
using namespace std;

queue<int> cardsInit(int & count)
{
	queue<int> cards;

	for (int i = 0; i < count; i++)
		cards.push(i + 1);

	return cards;
}

void cardAction(queue<int> & cards)
{
	while (cards.size() != 1) // 마지막으로 남는 카드를 찾아야 하기 때문에 1장이 남을 때까지 반복
	{
		cards.pop(); // 가장 위의 카드를 버린다.

		int topCard = cards.front(); // 제일 위에 있는 카드를 아래로 옮긴다
		cards.pop();
		cards.push(topCard);
	}
}

int main()
{
	int N;
	cin >> N;

	queue<int> cards = cardsInit(N);

	cardAction(cards);
	cout << cards.front();
}