/*
4. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all 
   the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
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

//function to merge
void mer_arr(int arf[],int arr1[],int arr2[],int &n,int &m)
{
	for(int i=0;i<m+n;i++)
	{
		if(i<n)
		{
				arf[i]=arr1[i];
		}
		else
		{
				arf[i]=arr2[i-n];
		}
	}
} 

//function to arrange array in ascending order

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
//function to find maximum

void lar_arr(int arr[],int &s,int &max)
{
	max=arr[s-1];
}

//function to find the minimum
void sml_arr(int arr[],int &n,int &min)
{
	min=arr[0];
}




//main function
int main()
{
	int m,n,min,max;
	
	cout<<"Input no of elements for first array ="<<endl;  //taking input the number of elements
	cin>>n;
	int arr1[n];
	inp_arr(arr1,n);
	cout<<"Input no of elements for second array ="<<endl;  //taking input the number of elements
	cin>>m;
	int arr2[m];
	inp_arr(arr2,m);
	int s=m+n;
	int arf[s];
	
	//operations
	mer_arr(arf,arr1,arr2,n,m);
	arrange_arr(arf,s);
	sml_arr(arf,s,min);
	lar_arr(arf,s,max);

	//   output
	cout<<"The largest element of the two arrays = "<<max<<endl;
	cout<<"The smallest element of the two arrays= "<<min<<endl;
}

