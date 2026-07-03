// TC=O(n)
// SC=O(1)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int SingleNumber(int arr[],int size){
    /*
    BRUTE SOLUTION
    for(int i=0;i<size;i++){
        bool isSingle=true;
        for(int j=0;j<size;j++){
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                isSingle=false;
                break;
            }
        }
        if(isSingle==true){
            return arr[i];
        }
       }  
       return -1;
       TC=O(n2)
       SC=O(1)
       */
/*
unordered_map<int,int>freq;
for (int i = 0; i < size; i++)
{
   freq[arr[i]]++;
}
for(auto it:freq){
    if(it.second==1){
        return it.first;
    }
}
return -1;
*/
int single=0;
for(int i=0;i<size;i++){
    single=single^arr[i];
}
return single;
}
int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int array[n];
cout<<"There should be one numeber that appear once in the array and other appear twice: "<<endl;
for (int i = 0; i < n; i++)
{
    cin>>array[i];
}
cout<<SingleNumber(array,n)<<endl;
return 0;
}
