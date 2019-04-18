#include <iostream>
using namespace std;
int arr[100], n;

int bsearch(int x)
{
	int left = 1, right = n, mid;
	
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] == x)
		{
			return mid;
			break;
		}
		else if (arr[mid] < x)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;

		}


	}
	return -5;

}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];

	}

	cout << bsearch(10) << endl;
	return 0;
	
	


	 

}

