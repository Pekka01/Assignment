//To check whether given number is in pallindrome or not
#include<iostream>
using namespace std;
int main()
{
    int n,temp,rev,a;
    cout<<"\nEnter any number: ";
    cin>>n;
    temp=n;
    while(n!=0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(rev==temp)
    cout<<"\nGiven number is in Pallindrome";
    else cout<<"\nGiven number is not in Pallindrome";
    return 0;
}