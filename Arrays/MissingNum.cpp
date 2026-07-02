// TC=O(n)
// SC=O(1)
#include<iostream>
using namespace std;

int missingnum(int arr[],int size){
int tempsum=0;
for (int i = 1; i <= size+1; i++)
{
tempsum+=i;
}
int arrsum=0;
for (int i = 0; i < size; i++)
{
  arrsum+=arr[i];
}
return (tempsum-arrsum);
}

int main(){

int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int array[n];
for (int i = 0; i < n; i++)
{
    cin>>array[i];
}
cout<<missingnum(array,n);
return 0;
}
