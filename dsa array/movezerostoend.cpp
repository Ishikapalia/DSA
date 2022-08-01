#include <iostream>
using namespace std;
int (int arr[],int n)
{ int i;
    int res=1;
    for(i=1;i<n;i++)
    {
    	if(arr[i]!=arr[res-1])
    	{
    		arr[res]=arr[i];
    		res++;
		}
	}
   return res;
    }
               


int main() {
    // Write C++ code here
int i;
int n;
int l;
int u;
cout<<"enter the size of array";
cin>>n;
int arr[n];
cout<<"enter the elements of array";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
 u=Rduplicates(arr,n);
 cout<<"print";
 for(i=0;i<u;i++)
{
	
    cout<<arr[i]<<" ";
    cout<<endl;
}
}
