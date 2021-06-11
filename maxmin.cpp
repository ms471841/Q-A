//program to find the min and max element in the vector

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){

vector<int>vet={4,69,10,1000,4367,34979,1,-1,-100};

cout<<*max_element(vet.begin(),vet.end());
cout<<endl<<*min_element(vet.begin(),vet.end());


}