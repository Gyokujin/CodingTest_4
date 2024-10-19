#include <iostream>
using namespace std;

int main()
{	
	int count;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int index;
		string word;
		cin >> index >> word;
		
		word.erase(index - 1, 1);
		cout << word << endl;
	}
}