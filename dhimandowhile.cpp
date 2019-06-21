#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;

    int i=1;
    do
    {
       sum =sum+(i*i);
       i++;

    }while(i<=n);
    cout<<sum;
}
