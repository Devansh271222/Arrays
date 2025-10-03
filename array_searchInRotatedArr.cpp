#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]>=arr[0]){
			s=mid+1;
		}else{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return s;
}
int BinSearch(int arr[],int low,int high,int key){
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==key){
			return mid;
		}else if(arr[mid]<key){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	return -1;
}
int main(){
	int n,k,pivot;
	cout<<"Enter size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter element to be searched: ";
	cin>>k;
	pivot=getPivot(arr,n);
	int result;
	if(k>=arr[pivot] && k<=arr[n-1]){
		result=BinSearch(arr,pivot,n-1,k);
	}else{
		result=BinSearch(arr,0,pivot-1,k);
	}
	if(result!=-1){
		cout<<"Element found at index: "<<result;
	}else{
		cout<<"Element not found!";
	}
	return 0;
}

