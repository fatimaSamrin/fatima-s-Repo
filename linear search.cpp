#include<iostream>
using namespace std;
int main()
{
	//input
	int arr[50];
	cout<<"Enter elements of array that you want to sort. Enter 9999 to end input loop:\n";
	int length, num, i;
	
	for(length=0; length<50; length++)
	{
	
		cin>> num;
		if (num==9999)
			break;
		arr[length] = num;		
	}
	
	
	//searching
	cout<<"Enter element that you want to find in array:\n";
	cin>>num;
	bool flag= false;
	for ( i=0; i<length; i++)
	{
		if (arr[i]== num)
		{
			cout << "number is present in array at "<<i<<" index\n";
			flag= true;
		}
		
		
	}
	
	if (flag== false)
		cout<<"Number is not found in array.";
	
	return 0;
}
