#include<iostream>
using namespace std;
void Insertionsort(int n, int arr[]){
	for (int i=1;i<n;i++){
		int curr = arr[i];
		int prev = i-1;
		while (prev>=0 && curr<arr[prev]){
			arr[prev+1] = arr[prev];
			prev--;
		}
		arr[prev+1] = curr;
		
	}
}
void print(int n, int arr[]){
	cout<<endl<<"Sorted array: ";
	for (int i=0;i<n;i++){
		
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter size of your array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of your array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	Insertionsort(n,arr);
	print(n,arr);
}
