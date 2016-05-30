#include<cstdio>
#include<cstring>
#include "iostream"

using namespace std;
const int maxn=20;
bool s[1<<maxn];	//最大结点个数
int main()
{
    int D,I,k,n,N;
    while(scanf("%d",&N)==1&&N!=-1)
	{
    while(N--&&scanf("%d%d",&D,&I)==2)
    {
        memset(s,0,sizeof(s));	//开关置关闭
        n=(1<<D)-1;		//具体最大结点数
        for(int i=0;i<I;i++)
        {
            k=1;
            while(1)
            {
                s[k]=!s[k];	//改变开关状态
                k=s[k]?2*k:2*k+1;	//因为已改变开关状态，所以如此
                if(k>n)break;	//越界跳出
            }
        }
        printf("%d\n",k/2);
    }
	}
    return 0;
}