/*
Given an array (or string), the task is to reverse the array/string.
Examples : 
Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}
Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int a[],int n,int s,int e){
	while(s <= e){
		int t = a[s];
		a[s] = a[e];
		a[e] = t;
		s++;
		e--;
	}
}

int main(){
	int n,input[10000];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> input[i];
	}
	reverseArray(input,n,0,n - 1);
	for(int i=0;i<n;i++){
		cout << input[i] << " ";
	}
	cout << endl;
	return 0;
}
