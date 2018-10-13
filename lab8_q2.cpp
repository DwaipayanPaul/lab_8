/*
2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
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

//to print the largest element
void lar_arr(int arr[],int &n)
{
	cout<<"The largest element="<<arr[n-1]<<endl;
}


//function to print smallest element 
void sml_arr(int arr[],int &n)
{
	cout<<"The smallest element="<<arr[0]<<endl;
}


//function to mean the elements
void mean_arr(int arr[],double &mean,int &n){
	double sum;	
	for(int i=0;i<n;i++)
	{	
		sum+=arr [i];
	}
 	mean=sum/n;
}

//function to find the median of the elements
void med_arr(int arr[],double &med,int &n)
{
	if(n%2==0)
	{
		med=(arr[n/2]+ arr[(n/2)-1])/2.0;
	}
	else
	{
		med=arr[(n-1)/2];

	}

}


//function to find the highest frequency element
void hif_arr(int arr[],int &in,int &n)
{
	in=0;
	int c=1;
	for(int i=0;i<n;i++)
	{
		int k=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j]==arr[i])
			{
				k++;
			}
		}
		if(k>c)
		{
			k=c;
			in=i;
		}
	}
	
}
		
			


//main function
int main()
{
	int n,h;
	cout<<"Input no of elements="<<endl;  //taking input the number of elements
	cin>>n;
	int arr[n];
	inp_arr(arr,n);
	arrange_arr(arr,n);
	sml_arr(arr,n);
	lar_arr(arr,n);
	double mean,med;
	int mod;
	mean_arr(arr,mean,n);
	med_arr(arr,med,n);
	hif_arr(arr,mod,n);
	cout<<"The mean of the numbers entered is="<<mean<<endl;   //output
	cout<<"The mode of the numbers entered is="<<med<<endl;   //output
	cout<<"The element with highest frequency is="<<arr[mod]<<endl;   //output
}
