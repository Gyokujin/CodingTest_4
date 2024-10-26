#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int K;
    cin >> K;

    for (int i = 0; i < K; i++)
    {
        int N;
        cin >> N;
        vector<int> points;

        for (int j = 0; j < N; j++)
        {
            int point;
            cin >> point;
            points.push_back(point);
        }

        sort(points.begin(), points.end());

        int largestGap = 0;

        for (int j = 0; j < points.size() - 1; j++)
        {
            int gap = points[j + 1] - points[j];
            largestGap = max(gap, largestGap); // 기존 largestGap보다 더 차이가 크다면 교체
        }

        cout << "Class " << i + 1 << endl;
        cout << "Max " << *(points.end() - 1) << ", ";
        cout << "Min " << *points.begin() << ", ";
        cout << "Largest gap " << largestGap << endl;
    }
}