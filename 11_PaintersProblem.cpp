//Painter's Partition Problem k-painters,1 unit time-1 unit time,continuous
#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int k,int mid){
	int painterCount=1,paintedLength=0;
	for(int i=0;i<n;i++){
		if(paintedLength+arr[i]<=mid){
			paintedLength+=arr[i];
		}else{
			painterCount++;
			if(painterCount>k||arr[i]>mid){
			return false;
			}
			paintedLength=arr[i];
		}
	}
	return true;
}

int painterPartition(int arr[],int n,int k){
	int sum=0,maxLen=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		maxLen=max(maxLen,arr[i]);
	}
	int s=maxLen,e=sum,ans=-1;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(isPossible(arr,n,k,mid)){
			ans=mid;
			e=mid-1;
		}else{
			s=mid+1;
		}
	}
	return ans;
}

int main(){
	int n,k;
	cout<<"Enter number of boards: ";
	cin>>n;
	int arr[n];
	cout<<"Enter lengths of boards: ";
	for(int i=0;i<n;i++) cin>>arr[i];
	cout<<"Enter number of painters: ";
	cin>>k;
	cout<<"Minimum time to paint all boards: "<<painterPartition(arr,n,k)<<endl;
}
