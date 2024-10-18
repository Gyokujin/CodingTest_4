#include <iostream>
using namespace std;

int main()
{	
	int guests = 0;
	int max = 0;

	for (int i =  0; i < 4; i++)
	{
		int out, in;
		cin >> out >> in;
		guests += (in - out);

		if (max < guests)
			max = guests;
	}

	cout << max;
}