#include <stdio.h>
int max;

int hailstone(int n){
	if(max<=n)
		max=n;

		if(n%2==0)
			hailstone(n/2);
		else if(n%2==1&&n!=1)
			hailstone(n*3+1);
		else if(n==1)
			return max;
}

int main()
{
	int t;
	int n,result;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		max=n;
		printf("%d\n",hailstone(n));
		max=0;
	}
	
	return 0;
}
