// Time Complexity: O(n)
// Space Complexity: O(1)
#include<iostream>
using namespace std;
void leftrot1(int arr[],int n){
int temp=arr[0];
int i;
for(i=1;i<n;i++){
arr[i-1]=arr[i];
}
arr[i-1]=temp;
}

int main(){
int array[6]={4,7,9,11,13,2};
leftrot1(array,6);
for(int i=0;i<6;i++){
    cout<<array[i]<<" ";
}
return 0;
}
