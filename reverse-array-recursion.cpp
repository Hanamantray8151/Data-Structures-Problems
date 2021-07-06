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

void reverseArrayHelper(int a[],int n,int s,int e){
	if(s >= e){
		return;
	}
	int temp = a[s];
	a[s] = a[e];
	a[e] = temp;
	reverseArrayHelper(a,n,s + 1,e - 1);
}

void reverseArray(int input[],int n){
	reverseArrayHelper(input,n,0,n-1);
}

int main(){
	int size,input[10000];
	cin >> size;
	for(int i=0;i<size;i++){
		cin >> input[i];
	}
	reverseArray(input,size);
	for(int i=0;i<size;i++){
		cout << input[i] << " ";
	}
	cout << endl;
	return 0;
}
