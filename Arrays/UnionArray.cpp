// TC=O(m+n)
//SC=O(m+n)
#include<iostream>
#include<bits\stdc++.h>
using namespace std;
vector<int> UnionArray(int arr1[],int arr2[],int m,int n){
vector<int>res;
/* 
Brute Force
set<int>st;
for (int i = 0; i < m; i++)
{
    st.insert(arr1[i]);
}
for (int i = 0; i < n; i++)
{
    st.insert(arr2[i]);
}
for(auto it:st){
    res.push_back(it);
}
    TC=O(2m+2n)=O(m+n)
    SC=O(m+n)
*/
// OPTIMAL SOLUTION
int i=0,j=0;
while (i<m&&j<n)
{
   if(arr1[i]<arr2[j]){
    if(res.size()==0||res.back()!=arr1[i]){
    res.push_back(arr1[i]);
    }
    i++;
   }
    else if(arr1[i]>arr2[j]){
    if(res.size()==0||res.back()!=arr2[j]){
    res.push_back(arr2[j]);
    }
    j++;
   }
   else{
    if(res.size()==0||res.back()!=arr1[i]){
    res.push_back(arr1[i]);
    }
    i++,j++;
   }
}
while (i<m)
{
    if(res.size()==0||res.back()!=arr1[i]){
    res.push_back(arr1[i]);
    }
    i++;
}
while (j<n)
{
    if(res.size()==0||res.back()!=arr2[j]){
    res.push_back(arr2[j]);
    }
    j++;
}

return res;
}
int main(){
int m;
cout<<"Enter the size of array1: "<<endl;
cin>>m;
int array1[m];
for (int i = 0; i < m; i++)
{
    cin>>array1[i];
}
int n;
cout<<"Enter the size of array2: "<<endl;
cin>>n;
int array2[n];
for (int i = 0; i < n; i++)
{
    cin>>array2[i];
}
vector<int> vec=UnionArray(array1,array2,m,n);
for(auto it:vec){
    cout<<it<<" ";
}
return 0;
}
