//To find largest of 3 numbers
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"\nEnter any 3 numbers: ";
    cin>>n1>>n2>>n3;
    cout<<"\nLargest Number is: ";
    if(n1>n2 && n1>n3)
    cout<<n1;
    else if(n2>n1 && n2>n3)
    cout<<n2;
    else cout<<n3;
    return 0;
}