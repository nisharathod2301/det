#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string word1 = "abc";
    string word2 = "bca";
    unordered_map<char,int> mp1;    
    unordered_map<char,int> mp2;
    
  for(int i = 0; i<word1.length();i++){
      mp1[word1[i]]++;
  }
  for(int i = 0; i<word2.length();i++){
      mp2[word2[i]]++;
  }
  for(auto i=mp1.begin();i!=mp1.end();i++){
      cout<<i->first<<"\t"<<i->second<<"\n";
    }
    cout<<"\n";
    for(auto i=mp2.begin();i!=mp2.end();i++){
          cout<<i->first<<"\t"<<i->second<<"\n";
    }
    if(mp1==mp2){
        cout<<"they are same";
    }
}
