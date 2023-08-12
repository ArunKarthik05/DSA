#include <iostream>
#include <string>
#include <map>
#include <sstream> // We need this for splitting the string
using namespace std;

int main() {
    // The treasure chest (string) filled with words
    string treasure;
    getline(cin,treasure);

    // Using a stringstream to split the string into words
    istringstream iss(treasure);
    string word;
    map<int, string> wordsMap; // We'll use a map to store words and their lengths

    while (iss >> word) {
        wordsMap[word.length()] = word;
    }

	for(auto x:wordsMap)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
    // Getting the last word from the map
    string lastWord = wordsMap.rbegin()->second;
cout<<wordsMap.rbegin()->second;
    // Finding the length of the last word
    int lastWordLength = lastWord.length();

    // Displaying the result
    cout << "The last word is: " << lastWord << endl;
    cout << "Its length is: " << lastWordLength << endl;

    return 0;
}

