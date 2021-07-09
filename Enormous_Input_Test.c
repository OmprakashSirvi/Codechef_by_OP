#include <stdio.h> 

/*
The purpose of this problem is to verify whether the method you are using to read input data is sufficiently
fast to handle problems branded with the enormous Input/Output warning. You are expected to be able to process
at least 2.5MB of input data per second at runtime.
*/

int main() {
	// Read the input n, k
	int n, k;
	scanf("%d %d", &n, &k);

	// ans denotes number of integers n divisible by k
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		
		if (t % k == 0) {
			ans++;
		}		
	}

	// Print the ans.
	printf("%d\n", ans);
	
	return 0;
}
