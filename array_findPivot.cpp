#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
	int s=0;
	int e=n-1;
	int mid = s+(e-s)/2;
	while(s<e){
		if(arr[mid]>=arr[0]){
			s=mid+1;
		}else{
			e=mid;
		}
		mid = s+(e-s)/2;
	}
	return s;
}int main(){
	int n;
	cout<<"Enter size: ";
	cin>>n;
	int arr[n];
	cout<<endl<<"Enter elements: ";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	int pos = getPivot(arr,n);
	cout<<"Pivot is at "<<pos<<" index"<<endl;
	return 0;
}





