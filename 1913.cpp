#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

/*���� �¶��� ���� 1913�� ����

1���� �����ϴ� ���� �ƴ�, n^2�� �� ���� �ݴ�������� 
�迭�� ä�������� ���α׷��� ®��.
�Ʒ� -> ������ -> �� -> ���� �������� �̵����� ��
�迭�� [i][j]�� ��� ��ȭ�Ǵ� ���� ���� �ϰ� 
��Ģ�� �߰��ߴ�.

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

	/*2���� �迭 �����Ҵ� �޾���.
	������ arr[999][999] ����� �޸� �ʰ� �߻��Ф�*/
	arr = new int*[n];
	for (k = 0; k < n; k++){
		arr[k] = new int[n];
	}

	cin >> number;//ã���� �ϴ� ��

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

