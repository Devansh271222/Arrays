#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter dimensions of your array(row,column): ";
	cin>>m>>n;
	int arr[m][n];
	cout<<endl<<"Enter elements of your array: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int size=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if (arr[i][j]!=0){
				size++;
			}
		}
	}
	int sp[size][3];
	int row=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (arr[i][j]!=0){
				sp[row][0]=i;
				sp[row][1]=j;
				sp[row][2]=arr[i][j];
				row++;
			}
		}
	}cout<<endl<<"Required sparse matrix is below: "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<3;j++){
			cout<<sp[i][j]<<" ";
		}cout<<endl;
	}	
	
}












