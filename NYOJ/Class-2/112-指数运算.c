#include <stdio.h>
#include <math.h>
int main()
{
//	int total = 0;
//	scanf("%d", &total);
	int x = 0, n = 0;
	while (scanf("%d%d", &x, &n) != EOF) {
		long long int result = 1;
		//�����ʱ��ܴܺ󣡣� 
		for (int i = 0; i < n; i++)
			result *= x;
		printf("%lld\n", result);
	}
	
	return 0;
}

