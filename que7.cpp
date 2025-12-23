#include<iostream>
using namespace std;
void Bubblesort(int n, int arr[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Change the condition for decreasing order
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << endl;
}

int main(){
	int n,k;
	cout<<"Enter number of elements in your array: ";
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter elements of your array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl<<"Enter element to be deleted: ";
	cin>>k;
	for(int i=0;i<n;i++){
		if(arr[i]==k){
			arr[i]=0;
		}
	}
	Bubblesort(n,arr);
	cout<<endl<<"Updated array: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
