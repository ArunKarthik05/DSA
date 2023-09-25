class Solution {
public:
/*
    char findTheDifference(string s, string t) {
        int sum_s1=0,sum_s2=0;
         for (char character : s) {
        sum_s1 += static_cast<int>(character);
        }
        for (char character : t) {
        sum_s2 += static_cast<int>(character);
        }
        return static_cast<char>(sum_s2-sum_s1);

    }
    */
/*REDUCED SPACE
    char findTheDifference(string s, string t) {
        char result = 0;

    for (char c : s) {
        result ^= c;
    }

    for (char c : t) {
        result ^= c;
    }

    return result;
}
*/
char findTheDifference(string s, string t) {
        char result = 0;

    for (int i = 0; i < s.length(); ++i) {
        result ^= s[i];
        result ^= t[i];
    }

    // XOR the additional character from string t
    result ^= t[t.length() - 1];

    return result;
}
};
