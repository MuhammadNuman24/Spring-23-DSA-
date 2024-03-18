#include<iostream>
using namespace std;
int main () {
      	int arr[10];
      	for(int  i =0 ; i<=9; i++) {
		cout<<"Enter value at index  "<<i<<" : ";
		cin>>arr[i];
     	}
     	cout<<"Displaying array value before swapping \n";
		for(int  i =0 ; i<=9; i++) {
		cout<<arr[i]<<"\n";
	     }
     	for(int  i=0 ; i<=9; i++) {
		for(int j=i+1 ; j<10; j++) {
		if(arr[i] <arr[j]){
			int temp =arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
           }}
         	cout<<"Displaying array value after swapping \n";
	   	for(int  i =0 ; i<=9; i++) {
		cout<<arr[i]<<" \n";
	    }

	   }
	
