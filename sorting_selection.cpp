#include<iostream>
using namespace std;
int SelectionSort(int n, int arr[]){
		for (int i=0;i<n-1;i++){
		int si = i;
		for (int j=i+1;j<n;j++){
			if (arr[j]<arr[si]){
				si = j;
			}
		}swap(arr[i],arr[si]);
	}
}
void print(int n, int arr[]){
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter size of your array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elemnts";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	SelectionSort(n,arr);
	print(n,arr);
}
