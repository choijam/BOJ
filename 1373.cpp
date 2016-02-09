#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string n;
	string temp;
	getline(cin, n);
	int k = 0;
	int j ,i;
	int sum = 0;
	int l = 0;
	int m = 0;
	int*result = new int[333334];
	
	if (n.length() == 1){
		cout << ((int)n[0]-48) << endl;
		return 0;
	}
	else j = n.length() - 1;

		while (1){
			for (i = 0; i < 3; i++){
				sum = sum + (((int)n[j]) - 48) * pow(2, k++);
				j--;
				if (j == -1)
					break;
			}
			result[m++] = sum;
			sum = 0;
			k = 0;
			if (j == -1)
				break;
		}

		for (l=m-1; l>=0; l--){
			cout << result[l];
		}

		cout << endl;
	return 0;
}
