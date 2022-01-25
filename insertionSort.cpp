#include <iostream>
#include <algorithm>
#include <time.h>
#include <stdlib.h>

using namespace std;

void insertion_sort(int x[],int n){
	int i,j,key;
	for(i=1;i<n-1;i++){
		key=x[i];
		j=i-1;
		while(j>=0 && x[j] > key){
			x[j+1]=x[j];
			j = j-1;
		}
		x[j+1] = key;
	}
}

int main(int argc, char** argv) {
	int n=20;
	int arr[n];
	srand(time(0));
	/*<------------------------------------->*/
	for(int i=0; i<n; i++){
		arr[i]=rand() %100+1;
		cout << arr[i] << " ";
	}
	cout << "Element in Array" << endl << endl;
	insertion_sort(arr, n+1);
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << "Insertion Sort" << endl << endl;
	/*<------------------------------------->*/
	return 0;
}
