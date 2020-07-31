//Insertion Sort
#include<iostream>
using namespace std;
int main()
{
    int a[20],n;   
    cout<<"\n Enter the size of array: ";
    cin>>n;
    cout<<"\nEnter the elements of array: ";
    for(int i=0;i<n;i++)
    cin>>a[i];  
    cout<<"\nInput list is \n";
    for(int i=0;i<n;i++)  
    {  
        cout <<a[i]<<" ";  
    }    
    for(int k=1; k<n; k++)   
    {  
        int temp = a[k];  
        int j= k-1;  
        while(j>=0 && temp <= a[j])  
        {  
            a[j+1] = a[j];   
            j = j-1;  
        }  
        a[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<n;i++)  
    {  
        cout<<a[i]<<" ";  
    }  
}  
