#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

    int array[15][15] = { 0 };

    for (int i = 0; i < 15; i++)
        array[0][i] = i;

    for (int i = 1; i < 15; i++)
    {
        for (int j = 1; j < 15; j++)
            array[i][j] = array[i][j - 1] + array[i - 1][j];
    }

	for (int i = 0; i < T; i++)
	{
        int k, n;
        cin >> k >> n;
        cout << array[k][n] << endl;
	}
}