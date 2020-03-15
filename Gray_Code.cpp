#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

#define INDEX_SIZE 100000

bool Gray_Code[INDEX_SIZE];
int size;

// build Gray_Code
void Build(int Index)
{
	if(Index == 0)
	{
		Gray_Code[Index] = !Gray_Code[Index];

		for(int i=size-1; i>=0; i--)
			printf("%d", Gray_Code[i]);
		printf("\n");
	}
	else
	{
		Build(Index - 1);

		Gray_Code[Index] = !Gray_Code[Index];

		for(int i=size-1; i>=0; i--)
			printf("%d", Gray_Code[i]);
		printf("\n");

		Build(Index - 1);
	}
}

int main()
{
	#ifdef DEBUG
	freopen("input.in", "r", stdin);
	freopen("output.out", "w", stdout);
	#endif

	while(~scanf("%d", &size))
	{
		memset(Gray_Code, 0, sizeof(Gray_Code));

		for(int i=size-1; i>=0; i--)
			printf("%d", Gray_Code[i]);
		printf("\n");

		Build(size-1);
	}

	return 0;
}