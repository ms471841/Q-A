
//program to find the kth minimum element 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

vector<int>vect={3,6,10,2,18,15,50,35,100};
sort(vect.begin(),vect.end());

int kmin=5;
cout<<kmin<<" minimum element is :"<<vect[kmin];






}