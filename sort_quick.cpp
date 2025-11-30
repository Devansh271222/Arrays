#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
	int pivot = arr[s];
	int count = 0;
	for (int i=s+1;i<=e;i++){
		if (arr[i]<=pivot){
			count++;
		}
		
	}
	int pivotIndex = s+count;
	swap(arr[s],arr[pivotIndex]);
	
	int i=s;
	int j=e;
	while(i<pivotIndex && j>pivotIndex){
		while(arr[i]<=pivot){
			i++;
		}while(arr[j]>pivot){
			j--;
		}
	if(i<pivotIndex && j>pivotIndex){
		swap(arr[i],arr[j]);
		i++;
		j--;
	   }
	}
	return pivotIndex;
}
void quickSort(int arr[],int s,int e){
	if (s>=e){
		return;
	} int p = partition(arr,s,e);
	
	quickSort(arr,s,p-1);
	quickSort(arr,p+1,e);
	
}
int main(){
	int n;
	cout<<"  Performing QUICK SORT!!  "<<endl;
	cout<<"Enter number of elements in array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of the array"<<endl;
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	int s=0;
	int e=n-1;
	quickSort(arr,s,e);
	cout<<"Sorted array is: ";
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
