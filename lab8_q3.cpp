/*
3. Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
*/
#include<iostream>
using namespace std;

// function to input elements in the array
void inp_arr(int arr[],int &n)
{
	cout<<"Enter "<<n<<" distinct elements"<<endl;
	for(int i=0;i<n;i++)
	{	
		cin>>arr[i];        // user input
	}
}

//function to arrange the array

void arrange_arr(int arr[],int &n)
{
	int t=0;	
	for(int i=0;i<(n-1);i++)
       {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
      }
}

//function to find and print the kth largest element
void klarge(int arr[],int &n,int &k)
{
	cout<<"The "<<k<<"th largest element of the array ="<<arr[n-k]<<endl;
}


//function to find and print the kth smallest element
void ksmall(int arr[],int &n,int &k)
{
	cout<<"The "<<k<<"th smallest element of the array ="<<arr[k-1]<<endl;
}




//main function
int main()
{
	int m,n,k;
	cout<<"Input no of elements for first array ="<<endl;  //taking input the number of elements
	cin>>n;
	int arr[n];
	inp_arr(arr,n);
	cout<<"To find kth largest and kth smallest"<<endl;  //input k
	cout<<"Input k="<<endl;
	cin>>k;
	arrange_arr(arr,n);
	if(k<n){
	ksmall(arr,n,k);
	klarge(arr,n,k);}
	else
	cout<<"Error!! in input"<<endl;  //error message
}

