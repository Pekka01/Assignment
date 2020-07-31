//To find 2nd max and min in an array
#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j,x;
    cout<<"\nEnter the size of array :";
    cin>>n;
    cout<<"\nEnter the elements of an array: ";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    cout<<"\nSecond Largest Number is: "<<a[1];
    cout<<"\nSecond Smallest Number is: "<<a[n-2];
    return 0;
}