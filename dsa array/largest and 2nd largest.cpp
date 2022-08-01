
#include <iostream>
using namespace std;
int reverse(int arr[],int n)
{ int low=0;
int high=n-1;
int t;
    while(low<high)
    {
    	int t=arr[low];
    	arr[low]=arr[high];
    	arr[high]=t;
    	low++;
    	high--;
	}

   
    }
               


int main() {
    // Write C++ code here
int i;
int n;
int l;
int s;
cout<<"enter the size of array";
cin>>n;
int arr[n];
cout<<"enter the elements of array";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
 reverse(arr,n);
 for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
    cout<<endl;
}
}
