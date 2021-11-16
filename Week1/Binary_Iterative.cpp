#include<iostream>
using namespace std;

int Iterative_BinarySearch(int array[], int l ,int r,int key)
{
	int count = 0;
	while (l <= r)
	{
		int mid = l + (r-l)/2;
		count = count + 1;
		if(array[mid] == key)
		{
			cout<<"Present "<<count<<endl;
			return count;
		}
		else if (array[mid] < key)
		{
			l = mid +1;
		}
		else
		{
			r = mid - 1;
		}
		
	}
	cout<<"Not present "<<count<<endl;
	return count;
}

int main()
{
	int test_case,array_size,key;
	cout<<"Input Number of test cases"<<endl;
	cin>>test_case;
	int count = 0 ;
	for(int i = 0; i < test_case; i++)
	{
		cin>> array_size;
		int array[array_size];
		for(int j = 0;j <array_size ; j++)
		{
			cin>> array[j];
		}
		cout<<"Input element to search"<<endl;
		cin>> key;
		int l = 0;
		int r = array_size;
		Iterative_BinarySearch(array,l,r-1,key);
		
	}
	return 0;
}
