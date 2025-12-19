#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of elements: ";
cin>>n;
int arr[n];
cout<<"Enter elements: ";
for(int i=0;i<n;i++){
cin>>arr[i];
}
int check=0;
for(int i=0;i<n-1;i++){
if(arr[i]>arr[i+1]){
check++;
}
}
if(check==0)
cout<<"SORTED";
else
cout<<"JUMBELED";
return 0;
}
