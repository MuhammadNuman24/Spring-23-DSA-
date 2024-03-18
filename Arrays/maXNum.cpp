#include<iostream>
using namespace std;
/* 
Get largest value from array 
 int main (){
	int arr [7];
	for(int i=0 ; i<=6; i++){
		cout<<"Enter value at "<<i <<" index ";
		cin>>arr[i];
	}
	int max=arr[0];
	cout<<"The maximum value in array is \n";
		for(int i=0 ; i<=6; i++){
      	if(max<arr[i]){
          max=arr[i];
	     } 
	}
	cout<<max;
}
 
 Get Minimum value from array 

 int main (){
	int arr [7];
	for(int i=0 ; i<=6; i++){
		cout<<"Enter value at "<<i <<" index ";
		cin>>arr[i];
	}
	int min=arr[0];
	cout<<"The minimum value in array is \n";
		for(int i=0 ; i<=6; i++){
      	if(min>arr[i]){
          min=arr[i];
	     } 
	}
	cout<<min;
}
Get reverse of array 
int main (){
	int arr [7];
	for(int i=0 ; i<=6; i++){
		cout<<"Enter value at "<<i <<" index ";
		cin>>arr[i];
	}
		for(int i=6 ; i>=0; i--){
		cout<<arr[i]<<'\n';
	}
	 
	 Get the searehed itm from array;
	*/
	
	int main (){
	int arr [7];
	for(int i=0 ; i<=6; i++){
		cout<<"Enter value at "<<i <<" index ";
		cin>>arr[i];
	}
	int search;
	cout<<"Enter value you want to search : " ;
	cin>>search;
		for(int i=0 ; i<=6; i++){
      	if(search==arr[i]){
      		search=arr[i] ;
		 cout<<"your search data is at index "<<i<<"\n"<<"which is "<<search;
	     } 
	}
}

