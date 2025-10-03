#include<iostream>
using namespace std;
int BinSearch(int n,int key,int arr[]){
	int low = 1;
	int high = n;
	while (low<=high){
		int mid = (low+high)/2;
		if (arr[mid] == key){
			return mid;
		}else if (arr[mid]<key){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}return -1;
	}
int main(){
	int n;
	cout<<"Enter size of your array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array in sorted manner: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}cout<<"Your array is: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	int key;
	cout<<"Enter your key value: ";
	cin>>key;
	int result = BinSearch(n,key,arr);
	if (result != -1){
		cout<<"Your key was found at index number "<<result;
	}else{
		cout<<"Your key was not in the given array.";
	}
}















