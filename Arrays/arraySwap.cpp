#include<iostream>
using namespace std;
int main () {
      	int temp[5], arr[5] ={2, 4,5,6,7}; int arr2[5]={5,6,8,9,40};
      	     	cout<<"Displaying array value before swapping 1st array \n";
		for(int  i =0 ; i<=4; i++) {
		cout<<arr[i]<<"\n";
	     }
	          	cout<<"Displaying array value before swapping 2nd array \n";
		for(int  i =0 ; i<=4; i++) {
		cout<<arr2[i]<<"\n";
	     }
     	for(int  i=0 ; i<=4; i++) {
		   temp[i] =arr[i];
			arr[i]=arr2[i];
			arr2[i]=temp[i];
	}
	
	  	     	cout<<"Displaying array value After swapping 1st array \n";
		for(int  i =0 ; i<=4; i++) {
		cout<<arr[i]<<"\n";
	     }
	          	cout<<"Displaying array value After swapping 2nd array \n";
		for(int  i =0 ; i<=4; i++) {
		cout<<arr2[i]<<"\n";
	     }
	     
	     
	 }
