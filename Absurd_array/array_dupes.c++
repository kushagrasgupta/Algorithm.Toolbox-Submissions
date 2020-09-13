#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <sstream>
#include <algorithm>
#include<unordered_map>
using namespace std; 

void printDup(const std::string str) {   
    stringstream ss(str);
    vector<int> vect;
    for (int i; ss >> i;) {   
        if (ss.peek() == ';')
            ss.ignore();
        if(ss.peek()==',')
        {
            ss.ignore();
            vect.push_back(i);
        }
                
    }
  /*  for (size_t i = 0; i < vect.size(); i++)
          cout << vect[i] <<" ";
    cout<<endl; */
    unordered_map<int,int>freq;
    for (int i=0; i<vect.size(); i++) {
        freq[vect[i]]++; 
    }
    bool dup=false;
    unordered_map<int,int>:: iterator it;
    for(it=freq.begin();it!=freq.end();++it){
        if (it->second > 1) 
        { 
            cout << it->first << " "; 
            dup = true; 
        } 
    }   
    if (dup == false) 
        cout << "-1";
    }

 int main() {
      string a;
      getline(cin,a);
      printDup(a);
      return 0;
 }