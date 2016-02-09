#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*백준 온라인 저지 1913번 문제

1부터 시작하는 것이 아닌, n^2의 수 부터 반대방향으로 
배열이 채워지도록 프로그램을 짰다.
아래 -> 오른쪽 -> 위 -> 왼쪽 방향으로 이동했을 시
배열의 [i][j]가 어떻게 변화되는 가를 관찰 하고 
규칙을 발견했다.

*/


int main()
{
	int n;
	int i=1;
	cin >> n;

	for (i = 1; i <= n; i = i + 2){
		cout << i;
	}

	return 0;
}

