#include<bits/stdc++.h>
using namespace std;
int b_search(const vector<int>&v,int l,int h,int tar)
{
    while(l<=h)
    {
        int mid =l+(h - l) / 2;
        if(v[mid]==tar)
        {
            return mid;
        }
        else if(v[mid]>tar)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }

    }
    return -1;

}
int main()
{
    int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
sort(v.begin(),v.end());
int tar;cin>>tar;
int result=b_search(v,0,n-1,tar);
if(result!=-1)
{
    cout<<result;
}
else {
    cout<<"Not found"<<endl;
}

}
