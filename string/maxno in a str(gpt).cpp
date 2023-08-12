#include <bits/stdc++.h>
using namespace std;

int extractMaxNumericValue(const string& input_string) {
    // Define the regular expression pattern to find all numeric values in the string
    regex pattern("\\d+");

    // Create a vector to store all numeric values found in the string
    vector<int> numeric_values;

    // Create a regex iterator to find all matches in the input string
    sregex_iterator it(input_string.begin(), input_string.end(), pattern);
    sregex_iterator end;

    // Iterate through the matches and add them to the numeric_values vector
    while (it != end) {
        smatch match = *it;
        numeric_values.push_back(stoi(match.str()));
        ++it;
    }

    // Find the maximum numeric value from the vector
    int max_numeric_value = *max_element(numeric_values.begin(), numeric_values.end());

    return max_numeric_value;
}

int main() {
    // Test cases
    string input1 = "welcome123tojava234class34";
    cout << extractMaxNumericValue(input1) << endl; // Output: 234

    string input2 = "Java12Programming456Sample11";
    cout << extractMaxNumericValue(input2) << endl; // Output: 456

    return 0;
}

