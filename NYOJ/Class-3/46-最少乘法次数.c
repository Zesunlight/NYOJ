#include <stdio.h>
int time(int n);
int main()
{
    int total = 0;
    scanf("%d", &total);
    while (total--) {
        int n = 0;
        scanf("%d", &n);
        printf("%d\n", time(n));
    }
    return 0;
}
int time(int n)
{
    int result = 0;

    if (n == 1)
        result = 0;
    else if (n == 2)
        result = 1;
    else if (n % 2 == 0)
        result = time(n / 2) + 1;
    else
        result = time(n / 2) + 2;

    return result;
}

-----------------------------------------------

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,cnt;
	cin>>n;
	while(n--)
	{
              cin>>m;
              cnt=0;
              while(m)
              {
                      if(m&1)   //m����������λ��
                        cnt++;
                      cnt++;
                      m>>=1;    //����һλ��������2
              }
              cout<<cnt-2<<endl;
	}
}

---------------------------------------------------
/*------����һ��˼·
�����ʾ��������й�ϵ�����ɾ����ӿ��Եó���
���磺n=15����ô8 < 15 < 2*8,����ָ���϶�Ϊ8����15-8��
�Ż�ʹ�ó˵Ĵ������١�����ָ��Ϊ8����Ҫ�Ĵ�����
��Ϊ8��ÿ�γ�2���ã������൱������һλ��
�ƶ��Ĵ������ǵõ�8�˵Ĵ���������8�õ��ˣ�
�˹������ֵõ���4,2,1, 15-8�϶����⼸�����õ���ÿ������Ӧ15�Ķ����Ƶ�һ��һ��
������8�Ĵ�������15-8��Ӧ����1��λ�������ǽ����
�ܵ���˵�����ǵõ�15�����λ��Ҫ�Ĵ������ټ��ϳ�ȥ���λ��1��λ�����ǽ����
*/
