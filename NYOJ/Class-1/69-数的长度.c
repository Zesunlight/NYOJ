#include <stdio.h>
#include <math.h> 
int main()
{
	int total = 1;
	scanf("%d", &total);
	
	for (int i=0; i<total; i++) {
		int number = 1;
		scanf("%d", &number);
		double digit = 1.0;
		for (double j=2; j<=number; j=j+1) {
			digit += log10(j);
		}
		printf("%d\n", (int)digit);
	}
	
	return 0;
} 

 
 
/*	NYOJ69 �׳���λ���� 
 *	����һ:
 *	������n!�Ľ���ǲ�����10��M���ݵ���,��n!<=10^M(10��M�η�),��С��M����С�������� n!��λ������
 *	��ʽ����ȡ�������� M =log10^n! ����M = log10^1+log10^2+log10^3...+log10^n ѭ�����,�������Mֵ��
 *	��M��n!�ľ�ȷλ������n�Ƚϴ��ʱ�����ַ���������Ҫ���Ѻܶ��ʱ�䡣
 *	
 *	������:
 *	����˹���֣�Stirling����ʽ�Ľ�����⡣�������Ƶ��õ��Ĺ�ʽ��
 *	res=(long)( (log10(sqrt(4.0*acos(0.0)*n)) + n*(log10(n)-log10(exp(1.0)))) + 1 );
 *	��n=1��ʱ������Ĺ�ʽ�����ã�����Ҫ��������n=1�������
 *	�й�˹���֣�Stirling����ʽ��������Ƶ�������Ͳ�������ϸ����������Ȥ�Ļ��ɿ����
 *	���ַ����ٶȺܿ�Ϳ��Եõ��������ϸ֤�����£�
 *	http://episte.math.ntu.edu.tw/articles/mm/mm_17_2_05/index.html
*/
//#include<iostream>
//#include <cmath>
//using namespace std;
//int normal(double n)
//{
//	double x=0;
//	while(n)
//	{
//		x +=log10(n);
//		n--;
//	}
//	return (int)x+1;
//}
//long stirling(double n)
//{
//	long x=0;
//	if( n ==1 )
//		x = 1;
//	else
//	{
//		x = (long)( (log10(sqrt(4.0*acos(0.0)*n)) + n*(log10(n)-log10(exp(1.0)))) + 1 );
//	} 
//	return x;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--)
//	{
//		int x;
//		cin>>x;
//		cout<<stirling(x)<<endl;
//	}
//	return 0;
//}                

