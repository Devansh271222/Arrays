#include<iostream>
using namespace std;
int Reverse(int n,int arr[]){
	int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}
int main(){
	int n;
	cout<<"Entr size of your array: ";
	cin>>n;
	int arr[n];
	cout<<endl<<"Enter elements of your array: ";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl<<"Current array: ";
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	Reverse(n,arr);
	cout<<endl<<"Reversed array: ";
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";}return 0;
}
