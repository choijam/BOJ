#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
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
	int n;
	int i=1;
	cin >> n;

	for (i = 1; i <= n; i = i + 2){
		cout << i;
	}

	return 0;
}

