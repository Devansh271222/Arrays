#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of elements: ";
cin>>n;
int arr[n];
cout<<"Enter elemenets of your array: ";
for(int i=0;i<n;i++){
cin>>arr[i];
}
int first = INT_MIN, second = INT_MIN;
for(int i = 0; i < n; i++){
if(arr[i] > first){
second = first;
first = arr[i];
}
else if(arr[i] > second && arr[i] != first){
second = arr[i];
}
}

if(second==INT_MIN){
cout<<"No second largest element (all elements may be equal).";
} else {
cout<<"Largest element: "<<first<<endl;
cout<<"Second largest element: "<<second<<endl;
}

}
