// TIME COMPLEXITY OF OPTIMAL SOLUTION
// TC=O(2n)
// SC=O(1)
// In this solution we can use any size of array ( I used 7 )
#include<iostream>
#include<vector>
using namespace std;
void MoveZeroes(int arr[],int size){
/*

BRUTE FORCE SOLUTION
vector<int>temp;
for (int i = 0; i < size; i++)
{
    if(arr[i]!=0){
        temp.push_back(arr[i]);
    }
}
int index=0;
for(auto it:temp)
{
arr[index]=it;
index++;
}
for (int i = index; i < size; i++)
{
    arr[i]=0;
}
TC=O(2n)
SC=O(n)
*/
// OPTIMAL SOLUTION
int index=0;
for (int i = 0; i < size; i++)
{
    if(arr[i]!=0){
        arr[index]=arr[i];
        index++;
    }
}
for (int i = index; i < size; i++)
{
    arr[i]=0;
}

}
int main(){
int array[7]={0,1,4,3,0,0,2};
MoveZeroes(array,7);
for(int i=0;i<7;i++){
    cout<<array[i]<<" ";
}
return 0;
}
