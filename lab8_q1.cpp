/*
1. Write a program to find sum of all elements of an array. (Use functions)
*/
#include<iostream>
using namespace std;

// function to input in array
void inp_arr(int arr[],int &n)
{
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i=0;i<n;i++)
	{	
		cin>>arr[i];        // user input
	}
}


//function to sum the elements
void sum_arr(int arr[],int &sum,int &n){
	for(int i=0;i<n;i++)
	{	
		sum+=arr [i];
	}
}

//main function
int main()
{
	int n;
	cout<<"Input no of elements="<<endl;  //taking input the number of elements
	cin>>n;
	int arr[n];
	inp_arr(arr,n);
	int sum=0;
	sum_arr(arr,sum,n);
	cout<<"The sum of the numbers you entered is="<<sum<<endl;   //output
}
