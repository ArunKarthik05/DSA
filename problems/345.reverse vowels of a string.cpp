#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c) {
    // Define the set of vowels
    static std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    return vowels.find(c) != vowels.end();
}

std::string reverseVowels(std::string s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (isVowel(s[left]) && isVowel(s[right])) {
            // Swap vowels at left and right pointers
            std::swap(s[left], s[right]);
            left++;
            right--;
        } else if (isVowel(s[left])) {
            right--;
        } else {
            left++;
        }
    }

    return s;
}

int main() {
    std::string input = "hello world";
    std::string reversed = reverseVowels(input);
    std::cout << "Original: " << input << std::endl;
    std::cout << "Reversed: " << reversed << std::endl;

    return 0;
}

