#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> moveneg(vector<int>&vect){

 int j=0;
 for (int i = 0; i < vect.size(); i++)
 {
   if (vect[i]<0)
   {
     if(i!=j){
       int temp=vect[i];
       vect[i]=vect[j];
       vect[j]=temp;
     }
     j++;
   }
   
 }
 return vect;

}

void printvector(vector<int>vect){
  for (auto &&i : vect)
  {
    cout<<i<<" ";
  }
  
}

int main(){

 vector<int>vect={2,4,5,-4,-6,3,-3,4,-7};
 cout<<"Original vector:";
 printvector(vect);
 cout<<endl;
 moveneg(vect);
 cout<<"After moving :" ;
 printvector(vect);
}