#include "../common.h"

int bin_search(int x, int arr[], int len) {
	int l = 0;
	int r = len-1;

	// if l == r
	// return l.
	// if 
	while (l<= r) {
		int mid = (l+r)/2;
		//int mid = (arr[l] + arr[r]) / 2;
		if (arr[mid] == x) 
			return arr[mid];

		if (arr[mid] < x) {
			l = mid  +1;

		} else {
			r = mid -1;
		}

	}

	return -1;

}


bool guess(int mid, int arr[], int x, int* ans) {
	if (arr[mid] == x) 
		*ans = arr[mid];

	return arr[mid] <= x;
}

int bs(int x, int arr[],  int len) {
	int l = 0;
	int r = len;
	int ans ;
	while(l<r) {
		int mid = (l+r)/2;

		if (guess(mid, arr, x, &ans)) {
			//ans = arr[mid];
			l = mid +1;
		} else {
			r = mid;
		}
	}
	return ans;
}

int b_search(int x, int arr[], int len) {
	std::cout << "b search: " << x << std::endl;
	int l = 0;
	int r = len;
	int ans = INT_MIN ;
	while(l<r) {
		int mid = (l+r)/2;
		if (guess(mid, arr, x, &ans)) {

			//ans = arr[mid];
			l = mid +1;

		} else {
			r = mid;
		}
	}
	return ans;
}