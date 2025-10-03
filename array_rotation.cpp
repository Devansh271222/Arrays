#include<iostream>
using namespace std;
int Rotate(int n,int k, int arr[]){
	//phle pure array ko reverse krna hai--
	k=k%n;
	int s=0;
	int e=n-1;
	while (s<e){
		swap(arr[s],arr[e]);
		s++;e--;
	}
	//first k elements ko reverse--
	s=0;e=k-1;
	while (s<e){
		swap(arr[s],arr[e]);
		s++;e--;
	}
	//ab ham k ke bad ke elements ko reverse kar dege--
	s=k;e=n-1;
	while (s<e){
		swap(arr[s],arr[e]);
		s++;e--;
	}
}

int main(){
	int n,k;
	cout<<"Entr size of your array: ";
	cin>>n;
	cout<<endl<<"Enter how many times you want to rotate the array :";
	cin>>k;
	int arr[n];
	cout<<endl<<"Enter elements of your array: ";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl<<"Current array: ";
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	Rotate(n,k,arr);
	cout<<endl<<"Rotated array: ";
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";}return 0;
}
