#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main(){
	int n = 5; // Размер массива a
	int m = 4; // Размер массива b
	int a[5] = {1, 3, 5, 7, 9}; // Массив a
	int b[4] = {2, 4, 6, 8}; // Массив b
	
	int i = 0 , j = 0, mn = INT_MAX;
	
	while (i < n && j < m){
		mn = abs(a[i] - b[j]);
		if ( i < n && a[i] < b[j]){
			i++ ;
		}else{
			j++;
		}
	}
	cout << mn;
}

