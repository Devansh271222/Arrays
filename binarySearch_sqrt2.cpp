#include<iostream>
using namespace std;
long long int binarySearch(int n){
    int s=0;
    int e=n;
    long long int ans=-1;
    while(s<=e){
        long long int mid=s+(e-s)/2;
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }else if(square<n){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}
int mySqrt(int x){
    return binarySearch(x);
}
double morePrecision(int n,int precision,int temp){
	double factor=1;
	double ans=temp;
	for (int i=0;i<precision;i++){
		factor=factor/10;
		for(double j=ans;j*j<n;j=j+factor){
			ans=j;
		}
	}
	return ans;
}
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Square root (int) of given number is: "<<mySqrt(x)<<endl;
    int temp = mySqrt(x);
    cout<<"Square root of given number is: "<<morePrecision(x,4,temp);
    return 0;
}








