#include <stdio.h>

int main()
{
	int total = 1;
	scanf("%d", &total);
	
	int number[total];
	int sort[total];
	for(int i=0; i<total; i++){
		scanf("%d", &number[i]);
		sort[i] = 0;
	}
	
	for(int j=0; j<total-1; j++) {
		for(int i=0; i<total-1-j; i++) {
			if(number[i] > number[i+1]) {
				int leaf = number[i+1];
				number[i+1] = number[i];
				number[i] = leaf;
			}
		}
	}
	
	sort[0] = number[0];
	int j = 1;
	for(int i=1; i<total; i++) {	
		if(number[i] != number[i-1]) {
			sort[j] = number[i];
			j++;
		}	
	}
	
	printf("%d\n", j);
	for(int i=0; sort[i]!=0; i++){
		printf("%d ", sort[i]);
	}
	
	return 0;
} 


//#include <stdio.h>
//int main()
//{
//	int i,j,n,sum=0,x[1001]={0};
//	scanf("%d",&n);
//	
//	for (i=1;i<=n;i++) {
//		scanf("%d",&j);
//		if (x[j]==0) 
//			sum++;	//记录不重复的数字个数 
//		x[j]=1;		//利用数组的下标实现排序 
//	}
//	
//	printf("%d\n",sum);
//	for (i=1;i<=1000;i++)
//		if (x[i]==1) 
//			printf("%d ",i);
//
//	return 0;
//}        
