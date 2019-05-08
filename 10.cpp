#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define n 100

int main() {
	int i, j, len;
	long long dec = 0;
	char a[n];
	scanf("%s", a);
	len = strlen(a);

	long long quan = 1;
	for (i = len - 1; i >= 0; i--) {
		if (a[i] <= '9' && a[i] >= '0')
			dec += (long long)(a[i] - '0') * quan;
		else if (a[i] <= 'f' && a[i] >= 'a')
			dec += (long long)(a[i] - 87) * quan;
		else if(a[i] <= 'F' && a[i] >= 'A')
			dec += (long long)(a[i] - 55) * quan;
		quan *= 16;
	}
	printf("%lld", dec);
	return 0;
}
