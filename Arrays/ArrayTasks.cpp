#include<iostream>
using namespace std;
int main (){
	int arr[10];
	for(int i= 0 ; i<=9; i++){
	cout<<"Enter value in the array at "<<i <<" index ";
	cin>>arr[i];	
	}

	cout<<"Enter vlaue at 6 index in array ";
	cin>>arr[6];
	
	cout<<"array value at index 2\n";
	cout<<arr[2];
		cout<<"\nArray is going to print here \n";
	for(int i= 0 ; i<=9; i++){
	cout<<arr[i]<<"\n";	
	}
}
