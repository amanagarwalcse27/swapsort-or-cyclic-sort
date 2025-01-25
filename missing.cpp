//swap sort technique for k duplicate k missing

#include<bits/stdc++.h>
using namespace std;
void swap_sort(int   a[],int n )
{
    int i = 0;
    
    while(i < n)
    {
        if(a[i] != a[a[i]-1]) //a[i] ki shi position a[i]-1 hogi agr aisa nhi h toh hme swap krna pdega with uski actual position ke element se
        { 
            swap(a[i],a[a[i]-1]);
        }
        else 
        {
           i++;
        }
    }
    
}
int main()
{
    int a[] = {5,2,3,3,2};
    int n = sizeof(a)/sizeof(a[0]);
    int i;

    cout<<"after swapsort"<<endl;
    swap_sort(a,n);

    for( i = 0;i<n;i++) //array after swap sort
    {
        cout<<a[i]<<" ";
    }
    //after swap sort i index pr  i+1 value hogi ,means a[i]= i+1 for 1 to N ,  agr wha pr aisa nhi h toh yaani us index pr duplicate baitha h 
   // missing is i+1,duplicate is a[i]

   for(i = 0;i<n;i++) 
    {
        if(a[i] != i+1)
        {
            cout<<"missing is "<<i+1<<endl;
            cout<<" duplicate is "<<a[i]<<endl;
        }
    }
    return 0;
    }