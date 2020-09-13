#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <sstream>
#include <set>
#include <unordered_map>
using namespace std; 

class Solution {
public:
int MorseRepresentations(vector<string>& words) 
    {
        vector<string> morse = {".-", "-...","-.-.","-..",".","..-.","--.", 
                                "....","..",".---","-.-",".-..","--","-.", 
                                "---",".--.","--.-",".-.","...","-","..-",
                                "...-",".--","-..-","-.--","--.."};
        
        set<string> morseWords;
        
        for (auto letter : words)
        {
            string morseLetter = "";
            for (auto s : letter)
            {
                morseLetter += morse[static_cast<int>(s - 'a')];
            }
            
            morseWords.insert(morseLetter);
        }
        
        return morseWords.size();
    }
};

    int main() {
      string a;
      vector<string> wor;
      cin>>a;
      wor.push_back(a);

      Solution s;
      cout<<s.MorseRepresentations(wor)<<" ";
      return 0;
 }