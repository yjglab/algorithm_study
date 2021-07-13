
#include <stdio.h>

int i[1001];
int fibonacci_dp(int x) {
	if (x == 1) return 1;
	if (x == 2) return 2;
	if (i[x] != 0) return i[x];
	return i[x] = fibonacci_dp(x - 1) + fibonacci_dp(x - 2);
}

int main() {
	printf("%d\n", fibonacci_dp(9));

	return 0;
}
// 55