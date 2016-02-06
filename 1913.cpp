#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
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
	int **arr=NULL;
	int n;
	int number;
	int x, y;
	int t=1;
	int temp;
	int i = -1, j=0, k;
	cin >> n;

	/*2차원 배열 동적할당 받았음.
	이유는 arr[999][999] 선언시 메모리 초과 발생ㅠㅠ*/
	arr = new int*[n];
	for (k = 0; k < n; k++){
		arr[k] = new int[n];
	}

	cin >> number;//찾고자 하는 수

	int n_2; 
	n_2 = n*n;
	temp = n;

	while (n_2>0){

		for (k = 0; k < n; k++){
			i = i + t;
			arr[i][j] = n_2;

			if (n_2 == number)
				x = i, y = j;

			n_2--;
		}
		n--;

		for (k = 0; k< n; k++){
			j = j + t;
			arr[i][j] = n_2;

			if (n_2 == number)
				x = i, y = j;

			n_2--;
		}
		t = t*-1;
	}

	for (i = 0; i < temp; i++){
		for (j = 0; j < temp; j++){
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}

	cout << x +1<< " " << y +1<< endl;
	return 0;
}

