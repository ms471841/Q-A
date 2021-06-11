
//program to reverse the array or vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseTheArray(int ar[],int i,int j){
   
   if(i>=j){
       return;
   }
   
   int temp=ar  [j];
    ar[j]=ar[i];
    ar[i]=temp;
   return  reverseTheArray(ar,i+1,j-1);
   
}

int main(){

//vector 

 vector<int>arr={3,5,6,7,8,9,10,18,20};

for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}
reverse(arr.begin(),arr.end());
cout<<endl;
for (int  i = 0; i < arr.size(); i++)
{
 cout<<arr[i]<<" ";
}
cout<<endl;

// array

int arr1[]={2,4,5,6,7,8,9,10,34,345};
for (auto &&i : arr1)
{
    cout<<i<<" ";
}

int i=0,j=9,temp;

while (i<j)
{
    temp=arr1[j];
    arr1[j]=arr1[i];
    arr1[i]=temp;
    i++;
    j--;
}
cout<<endl;
for (auto &&i : arr1)
{
    cout<<i<<" ";
}

//reccursive way
 cout<<endl;
 
 reverseTheArray(arr1,i,j);
 
 for (auto &&i : arr1)
 {
     cout<<i<<" :";
 }
 

}