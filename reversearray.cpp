/* C++ Program - Reverse Array */
using namespace std;		
#include<iostream>

#include<conio.h>
int main()
{
	
	int arr[50], size, i, j, temp;
	cout<<"Enter array size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<< "Array"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	j=i-1;  // now j will point to the last element
	i=0;   //  and i will be point to the first element
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	cout<<"Now the Reverse of the Array is : \n";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	
}
