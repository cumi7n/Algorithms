#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main(){
	int n = 5; 
	int m = 4; 
	int a[5] = {1, 3, 5, 7, 9}; 
	int b[4] = {2, 4, 6, 8}; 
	
	int i = 0 , j = 0, mn = INT_MAX;
	
	while (i < n && j < m){
	
		int min_mn = mn = abs(a[i] - b[j]);

		if (min_mn < mn){
			mn = min_mn;
		}

		if ( i < n && a[i] < b[j]){
			i++ ;
		}else{
			j++;
		}
	}
	cout << mn;
}
