// Time Complexity For Optimal Solution = O(n)
// Space Complexity for Optimal Solution=O(1)
// Better brute solution and there Time,Space Complexity have mentioned below
#include<iostream>
#include<algorithm>
using namespace std;
void rotatek(int arr[],int k,int n){
k=k%n;
/* 
BRUTE SOLUTION
cout<<"After reducing value of k is "<<k<<" now we just have to rotate the array for "<<k<<" times:"<<endl;
for(int i=0;i<k;i++){
int temp=arr[n-1];
for(int i=n-2;i>=0;i--){
arr[i+1]=arr[i];
}
arr[0]=temp;
}
TC=O(nk)
SC=O(1)
*/


/* 
BETTER SOLUTION
int temp[k];
int ind=0;
// storing in temp array 
for(int i=n-k;i<n;i++){
    temp[ind]=arr[i];
    ind++;
}
// shifting
for(int i=n-k-1;i>=0;i--){
arr[i+k]=arr[i];
}
//putting
int j=0;
for(int i=0;i<k;i++){
    arr[i]=temp[j];
    j++;
}
}
TC=O(n+k)
SC=O(k)
*/
///*
reverse(arr,arr+(n-k));
reverse(arr+(n-k),arr+n);
reverse(arr,arr+n);
//*/
}
int main(){
int array[7]={1,2,3,4,5,6,7};
rotatek(array,4,7);
for (int i = 0; i < 7; i++)
{
    cout<<array[i]<<" ";
}

return 0;
}
