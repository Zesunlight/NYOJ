#include <stdio.h>
int main ()
{
	int total=0;
	scanf("%d", &total);
	
	int sample[30]={0};
	for( int i=0; i<total; i++){
		scanf("%d", &sample[i]);
	}
	
	int j=0, i=0;
	for( i=0; i<total; i++){
		for( j=1; j<=sample[i]; ){
			printf("%d ", j);
			j+=2;
		}
		printf("\n");
		for( j=2; j<=sample[i]; ){
			printf("%d ", j);
			j+=2;
		}
		printf("\n\n");
	}
	
	return 0;
}
 
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a;
//	while(n--)
//	{
//		scanf("%d",&a);
//		for(int i=1;i<=a;i+=2)
//			printf("%d ",i);
//		puts("");
//		for(int i=2;i<=a;i+=2)
//			printf("%d ",i);
//		puts("");
//	}
//}        
