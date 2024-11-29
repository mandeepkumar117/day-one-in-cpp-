#include<iostream>
using namespace std;

int main(){
    
    int row,col;
    cout<<"Enter row"<<"\n";
    cin>>row;
    cout<<"Enter col"<<"\n";
    cin>>col;
    int arr[row][col];
    cout<<"enter array element\n";
    for(int i=0; i<row; i++){
    	for(int j=0; j<col; j++){
    		cin>>arr[i][j];
    	}
    }
    for(int i=0; i<row; i++){
    	for(int j=0; j<col; j++){
    		int	temp=arr[i][j];
    		arr[i][j]=arr[j][i];
    		arr[j][i]=temp;
		}
	}
	cout<<"transpose of matrix is yours"<<"\n";
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout<<arr[j][i]<<"\t";
		}
		cout<<endl;
	}
    
    
    
}

