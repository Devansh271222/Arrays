//Book Allocation Problem
// 
#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int p,int mid){
	int studentCount=1;
	int pagesum=0;
	for(int i=0;i<n;i++){
		if (pagesum+arr[i]<=mid){
			pagesum=pagesum+arr[i];	
		}else{
			studentCount++;
			if(studentCount>p || arr[i]>mid){
				return false;
			}
			pagesum=arr[i];
		}
	}
	return true;
}
int allocationBook(int arr[],int n,int p){
	int s=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	int e=sum;
	int ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(isPossible(arr,n,p,mid)){
			ans=mid;
			e=mid-1;
		}else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int main(){
	int n,p;
	cout<<"Enter number of pages: ";
	cin>>n;
	int arr[n];
	cout<<"Enter pages: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter number of students: ";
	cin>>p;
	cout<<allocationBook(arr,n,p);
}
