#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n, m;
	int i;
	int cnt = 0;
	int temp;
	int* arr = (int*)calloc(1000000, sizeof(int));
	scanf("%d %d", &n, &m);
	temp = n;
	for (i = 0; i < n; i++){
		arr[i] = i + 1;
	}
	printf("<");
	for (i = 0; arr[i]; i++){
		if (i % m != (m - 1))
			arr[i + n] = arr[i];
		else if (i % m == (m - 1)){
			cnt++;
			n--;
			if (cnt == temp)
				printf("%d", arr[i]);
			else printf("%d, ", arr[i]);
		}
	}
	printf(">\n");
	return 0;
}