#include <stdio.h>
#include <string.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	while (n--) {
		char s[100];
		scanf("%s", s);
		
		int len = strlen(s);
		for (int i = 1; i < len; i++) {			
			if (len % i == 0) {		//�����ǳ��ȵ����� 
				for (int j = i; j < len; j = j + i)	//����Ϊi 
					for (int k = 0; k < i; k++)		//��һ������ 
						if (s[k] != s[j + k])	//�������ڵ����һ�����ڵ�����Ƚ� 
							goto next;
				
				printf("%d", i);
				break;
			}
			
			next:
				
			if (i == (len - 1))
				printf("%d", len);
		}
				
		if (len == 1)	//������� 
			printf("1");			
		if (n >= 1)
			printf("\n");	
	}
    	
    return 0;
}
