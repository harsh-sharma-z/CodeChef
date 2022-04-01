#include <stdio.h> 

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	for(int i=0; i<T;i++)
	{
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}
