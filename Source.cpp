#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;


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

	arr = new int*[n];
	for (k = 0; k < n; k++){
		arr[k] = new int[n];
		//memset(arr[i], 0, sizeof(int)*n);
	}

	cin >> number;

	int n_2;
	n_2 = n*n;
	temp = n;

	while (n_2>0){

		for (k = 0; k < n;k++){
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

