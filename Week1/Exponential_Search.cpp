#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

bool binary_search(int key, vector<int> vec,int beg,int end){
    if(end>=beg)
    {
        int mid = beg + (end-beg)/2;

        if(vec[mid]==key)  return true;
        if(vec[mid]<key)   return binary_search(key,vec,mid+1,end);
        else               return binary_search(key,vec,beg,mid-1);
    }
    return false;

}

void exponential_search(vector<int>vec, int size,int key){
    if(vec[0]==key)
    cout<<"Element found!! \n";

    int i=1;
    while(i<size){
        i=i+2;
    }
    bool found=binary_search(key,vec,i/2,size-1);

    if(found==true)  cout<<"Element found!! \n";
    else             cout<<"Element not found!! \n";
}

int main(){
    vector<int> vecay;
    int x,n,key;
    cout<<"Enter the range-";
    cin>>n;
    cout<<"\nEnter the elements of vector- ";
    while(n){
        cin>>x;
        vecay.push_back(x);
        n--;
    }
    cout<<"\n\nEnter the target element to be found-";
    cin>>key;
    sort(vecay.begin(),vecay.end());
    exponential_search(vecay,vecay.size(),key);
    return 0;



}
