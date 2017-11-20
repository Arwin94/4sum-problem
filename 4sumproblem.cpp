#include <iostream>
#include <algorithm>
using namespace std;
void quadTuple(int arr[], int n, int sum)
{
    sort (arr, arr + n);
	for (int i = 0; i <= n - 4; i++)
	{
		for (int j = i + 1; j <= n - 3; j++)
		{
			int k = sum - (arr[i] + arr[j]);
			int low = j + 1, high = n - 1;

			while (low < high)
			{
				if (arr[low] + arr[high] < k)
					low++;

				else if (arr[low] + arr[high] > k)
					high--;
				else
				{
					cout << "(" << arr[i] << " " << arr[j] << " " <<
                            arr[low] << " " << arr[high] << ")\n";

					low++, high--;
				}
			}
		}
	}
}
int main()
{
	int arr[] = { 2, 7, 4, 0, 9, 5, 1, 3 };
	int sum = 20;

	int n = sizeof(arr) / sizeof(arr[0]);

	quadTuple(arr, n, sum);

	return 0;
}
