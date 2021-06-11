#include<iostream>
using namespace std;
#include<vector>

vector<int>unionoftwo(vector<int>&arr1,vector<int>&arr2){

for (auto &&i : arr2)
{
    for (auto &&j : arr1)
    {
        if(i!=j){
            arr1.push_back(i);
        }
    }
    
}

return arr1;

}

void printUnion(vector<int>arr1){

for (auto &&i : arr1)
{
    cout<<i<<" ";
}

}

int main(){


 vector<int>arr1={1,2,3,4,5};
 vector<int>arr2={1,2,3};
 unionoftwo(arr1,arr2);
 cout<<"Union is :";
 printUnion(arr1);


}