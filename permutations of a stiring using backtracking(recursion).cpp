#include <iostream>
using namespace std;

void permutations(string &str, int i){
   //basecase
   if(i>=str.size()){
     cout<<str<<" ";
   }
  
  //taking out the permutations
  for(int j = i;j<str.size();j++){
     swap(str[i],str[j]);
     permutations(str,i+1);
    //backtracking
     swap(str[i],str[j]);
  }
 
}

int main(){
   string str = "abc";
    int i = 0;
    permutations(str,i);
}