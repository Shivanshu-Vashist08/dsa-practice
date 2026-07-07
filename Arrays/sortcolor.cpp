#include<bits/stdc++.h>
using namespace std;
void sortColours(int arr[],int n){
// Brute Force
// sort(arr,arr+n);

// Better Approach
// int red=0,white=0,blue=0;
// for (int i = 0; i < n; i++)
// {
//    if(arr[i]==0)red++;
//    if(arr[i]==1)white++;
//    if(arr[i]==2)blue++;
// }
// int index=0;
// while (red!=0)
// {
//   arr[index]=0;
//   red--;
//   index++;
// }
// while (white!=0)
// {
//   arr[index]=1;
//   white--;
//   index++;
// }
// while (blue!=0)
// {
//   arr[index]=2;
//   blue--;
//   index++;
// }

// Optimal Approach
int low=0;
int mid=0;
int high=n-1;
while (mid<=high)
{

if(arr[mid]==0){
    swap(arr[low],arr[mid]);
    low++,mid++;
}
else if(arr[mid]==1){
   mid++;
}
else{
    swap(arr[high],arr[mid]);
   high--;
}
}
}
int main()
{
int size;
cin>>size;
int array[size];
// Array only contains 0,1 and 2
// 0 1 2 Represents Red white blue
// place them in order of red white blue
for(int i=0;i<size;i++){
    cin>>array[i];
}
sortColours(array,size);
for(int i=0;i<size;i++){
   cout<<array[i]<<" ";
}
return 0;
}
