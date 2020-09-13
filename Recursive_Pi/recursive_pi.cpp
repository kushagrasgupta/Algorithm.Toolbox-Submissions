#include <iostream>
#include <string.h>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


/*void replacePiHelper(char str[], int start) {
    // Base condition 
    // if the string is empty 
    // or of length one 
    if (str[start] == '\0' || str[start] == '\0') { 
        return; 
    } 
  
    // Getting the answer from 
    // recursion for the smaller 
    // problem 
    replacePiHelper(str, start + 1); 
  
    // Small calculation part 
    // if the first character is 'p' 
    // and the first character of the part 
    // passed to recursion is 'i' then replace 
    // "pi" with "3.14" 
    if (str[start] == 'p' && str[start + 1] == 'i') { 
  
        // Shifting the characeters to 
        // right side to put 3.14 in 
        // the character array 
        for (int i = strlen(str); i >= start + 2; i--) { 
            str[i + 2] = str[i]; 
        } 
  
        // Replacing with "3.14" 
        str[start] = '3'; 
        str[start + 1] = '.'; 
        str[start + 2] = '1'; 
        str[start + 3] = '4'; 
    } 
} 
  
// Function to replace pi with 3.14 
void replacePi(char str[]) 
{ 
    replacePiHelper(str, 0); 
} 

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
*/
//Method two below
void printpi(const std::string input) {
    
    string output="";
    for(int i=0;i<input.size();i++)
    {
        if (i + 1 < input.size() and input[i] == 'p' and input[i + 1] == 'i') { 
            output+="3.14";
            i++; 
           } 
        else {
            output+=input[i];
        }
       
    }
    cout<<output<<endl;
    
                
    }
int main() {
    string a;
    getline(cin,a);  
    printpi(a);
    return 0;
 }