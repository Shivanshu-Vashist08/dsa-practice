// TC=O(n)
// SC=O(1)
#include<iostream>
using namespace std;
int MaximumConsecutiveOnes(int arr[],int size){
    int cuurentcount=0;
    int maxcount=0;
for (int i = 0; i < size; i++)
{
  if (arr[i]==1)
  {
    cuurentcount++;
    maxcount=max(maxcount,cuurentcount);
  }
  else{
    cuurentcount=0;
  }
  
}
return maxcount;
}
int main(){
int size;
cout<<"Enter the size of array: "<<endl;
cin>>size;
int array[size];
// Array can only contains 0's and 1's
for (int i = 0; i < size; i++)
{
   cin>>array[i];
}
cout<<MaximumConsecutiveOnes(array,size)<<endl;
return 0;
}
