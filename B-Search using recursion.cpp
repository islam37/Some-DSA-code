#include<bits/stdc++.h>
using namespace std;
int a[700],target; //suppose an array range of up to 700;
bool search(int l,int r)
{

    if(l>r)
    {
        return false;
    }
    int mid=(l+r)/2; // finding mid
    if (a[mid]==target)
    {
        return true;
    }
    else if(a[mid]<target)
    {
        return search(mid+1,r);
    }
    else
    {
        return search(l,mid-1);
    }

}
int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"false\n"; //handle empty input
    }
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n); //sort the entire filled array
    cin>>target;
    cout<<boolalpha<<search(1,n)<<'\n' ;
}

