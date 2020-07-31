//To check whether string is pallindrome or not
#include<iostream>
using namespace std;
int main()
{
    char str[20];
    int l=0,c=0;
    cout<<"\nEnter any string: ";
    cin.getline(str,20);
    for(int i=0;str[i]!='\0';i++)
    l++;
    for(int i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-i-1])
        c++;
    }
    if(c==1)
    cout<<"\nString is not a Pallindrome";
    else cout<<"\nString is a Pallindrome";
    return 0;
}