//To check whether number is prime or not
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"\nEnter any number: ";
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        cout<<n<<" is a Prime number";
    }
    else cout<<n<<" is not a prime number";
    return 0;
}