#include <stdio.h>

int main()
{
	double x,y,xi,yi;
	int n;
	int i;
	double min;
	scanf("%lf %lf",&x,&y);
	scanf("%d",&n);
	min=(x/y)*1000;
	
	while(n--){
		scanf("%lf %lf",&xi,&yi);
		if(min>=xi/yi*1000)
		min=xi/yi*1000;
	}

	printf("%.2lf\n",min);
	return 0;
}
