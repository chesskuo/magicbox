#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("input.in", "r", stdin);
	freopen("output.out", "w", stdout);
	#endif

	int arr[10000], index = 0;

	while(~scanf("%d", &arr[index++]))
	{
		int total = arr[index-1];
		
		while(scanf("%d", &arr[index++]))
		{
			total += arr[index-1];

			if(getchar() == '\n')
				break;
		}

		printf("total: %d\n", total);
		index = 0;
	}

	return 0;
}
