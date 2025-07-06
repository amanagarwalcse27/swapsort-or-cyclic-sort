//swap sort technique for k duplicate k missing

#include<bits/stdc++.h>
using namespace std;
//if range [0,N] then every elemnt shiuld be at index = value or a[i];

//if range [1,N] then every elemnt shiuld be at index = value - 1 or a[i] -1;

//sometimes using cyclic sort we have to ignore array values which are negative or greater than size of array 
//eg question leetcode first mising positive


void swap_sort(int a[],int n)
{
    int i = 0;


    //if arr[i] = i+1 for index i then it is sorted or already in correct position ,if arr[i] = arr[arr[i] - 1] then it is duplicate ,other than these two swap 
    //this concept used in duplicate elemnt leetcode question
    while(i < n)
    {
        int correct = a[i] ;
        if(a[i] != a[correct])
        {
            swap(a[i],a[correct]);
        }
        else
        {
           i++;
        }
    }
}

int main()
{
    int a[] = {4,3,2,1};
    int n = sizeof(a)/sizeof(a[0]);

    cout<<"after swapsort"<<endl;
    swap_sort(a,n);

    for( int i = 0;i<n;i++) //array after swap sort
    {
        cout<<a[i]<<" ";
    }
    //after swap sort i index pr  i+1 value hogi ,means a[i]= i+1 for 1 to N ,  agr wha pr aisa nhi h toh yaani us index pr duplicate baitha h 
   // missing is i+1,duplicate is a[i]

   for(int i = 0;i<n;i++) 
    {
        if(a[i] != i+1)
        {
            cout<<"missing is "<<i+1<<endl;
            cout<<" duplicate is "<<a[i]<<endl;
        }
    }
        
    return 0;
    }