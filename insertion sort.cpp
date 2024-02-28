#include<iostream>
using namespace std;
int main()
{
	//input 
		int arr[20];
	cout<<"Enter elements of array that you want to sort. Enter 9999 to end input loop:\n";
	int length, num;
	
	for(length=0; length<20; length++)
	{
	
		cin>> num;
		if (num==9999)
			break;
		arr[length] = num;		
	}
	
	//sorting
	for(int i=0; i<length-1; i++)
	{
		int j= i+1;
		int key= arr[j];
		while(j>0)
		{
		if(key< arr[j-1])
			arr[j]= arr[j-1];	
			j--;
		}
		arr[j]= key;	
	}
	
	//output
	cout <<"\nArray in sorted order:\n";
	for(int i=0; i<length; i++)
	{
		cout <<arr[i]<<'\t';
		}	
	
	
	return 0;
}
