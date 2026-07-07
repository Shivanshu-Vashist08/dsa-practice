#include<bits/stdc++.h>
using namespace std;
int majority(int nums[],int n){
    // Brute Force

    //    for(int i=0;i<n;i++){
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(nums[i]==nums[j])count++;
    //     }
    //     if(count>n/2)return nums[i];
    //    }
    //    return -1;

    // Better Solution
    //  map<int,int>freq;
    //   for(int i=0;i<n;i++){
    //     freq[nums[i]]++;
    //   }
    //   for(auto it:freq){
    //     if(it.second>n/2)return (it.first);
    //   }
    //   return -1;

    // Optimal solution
     int count=0;
     int majority;
     for(int i=0;i<n;i++){
        if(count==0){
            majority=nums[i];
        }
        if(nums[i]==majority){
            count++;
        }
        else{
            count--;
        }
     }
     int majcount=0;
     for (int i = 0; i < n; i++)
     {
        if(nums[i]==majority)majcount++;
     }
     if(majcount>n/2){
        return majority;
     }
     else{
        return -1;
     } 
}
int main(){
int n;
cin>>n;
int array[n];
for (int  i = 0; i < n; i++)
{
    cin>>array[i];
}
cout<<majority(array,n)<<endl;
return 0;
}
