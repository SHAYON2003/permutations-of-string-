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
    //backtracking -> to recreate the original input (thats why we are again swapping the string) and we have used pass by reference also which dont maken any copy of the string
     swap(str[i],str[j]);
  }
 
}

int main(){
   string str = "abc";
    int i = 0;
    permutations(str,i);
}
