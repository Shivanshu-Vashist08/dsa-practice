// TC=O(n)
// SC=O(1)
#include<iostream>
using namespace std;
int LongestSubarray(int arr[],int n,int k){
    // BRUTE SOLUTION
/*
int maxlen=0;
for (int i = 0; i < n ;i++)
{
for (int j = i; j < n; j++)
{
    int sum=0;
  for(int k=i;k<=j;k++){
sum+=arr[k];
  }
  if(sum==k){
    maxlen=max(maxlen,j-i+1);
  }
}

}
return maxlen;
*/
int sum=0;
int st=0,end=0;
int maxlen=0;
while (end<n)
{
    sum+=arr[end];
    if(sum<k){
        end++;
    }
    if(sum==k){
        maxlen=max(maxlen,end-st+1);
        end++;
    }
    while (sum>k)
    {
        sum=sum-arr[st];
        st++;
    }
    if(sum==k){
        maxlen=max(maxlen,end-st+1);
    }
    end++;
}
return maxlen;
}
int main(){
int size;
cin>>size;
int array[size];
// {1,2,3,1,1,1}
for (int i = 0; i < size; i++)
{
    cin>>array[i];
}
int k;
cin>>k;
cout<<LongestSubarray(array,size,k)<<endl;
return 0;
}
