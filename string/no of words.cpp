#include <bits/stdc++.h>

using namespace std;
 
void freq(string str, map<string, int>& m){

    // Used for breaking words.
    stringstream new_str(str);
   
    // To store individual words.
    string Word;
 
    // Reading individual words.
    while (new_str >> Word) {
        m[Word]++;
    }
}
 
int main() {
    string str = "I am a tech geek and I will make you a geek also";
    
    // Each word in a map will be mapped to its frequency.
    map<string, int> m;
    
    // Calling the function to calculate the frequency of words.
    freq(str, m);
        
    // Traversing map to print the key and values.
    for(auto x: m) {
        cout << x.first << "->" << x.second << endl;
    }
}
