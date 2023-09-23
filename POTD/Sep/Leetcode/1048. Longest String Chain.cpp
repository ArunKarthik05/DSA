/*
class Solution {
public:
    int longestStrChain(vector<string>& words) {
        int count;
        auto comp = [] (const string &a, const string &b){
            return a.size() < b.size();
        };
        sort (words.begin(), words.end(),comp);
        std::unordered_map<std::string, int> dp;
        int max_chain = 0;
        for (const auto& word : words) {
            dp[word] = 1;
            for (int i = 0; i < word.size(); ++i) {
                std::string prev_word = word.substr(0, i) + word.substr(i + 1);
                if (dp.find(prev_word) != dp.end()) {
                    dp[word] = std::max(dp[word], dp[prev_word] + 1);
                }
            }
            max_chain = std::max(max_chain, dp[word]);
        }
        return max_chain;
    }
};
*/
class Solution{
    public:
    int longestStrChain(vector<string>& words) {
        // Sort words by length in increasing order
        sort(words.begin(), words.end(), [](const string& a, const      string& b) {
            return a.length() < b.length();
        });

        // Create a dictionary to store the longest chain length for each word
        unordered_map<string, int> word_chain_length;

        function<int(const string&)> findChain = [&](const string& word) {
            if (word_chain_length.find(word) != word_chain_length.end()) {
                return word_chain_length[word];
            }

            int max_chain_length = 1;  // Initialize the chain length for the current word

            for (int i = 0; i < word.length(); ++i) {
                // Remove one letter from the current word
                string new_word = word.substr(0, i) + word.substr(i + 1);

                if (find(words.begin(), words.end(), new_word) != words.end()) {
                    int chain_length = 1 + findChain(new_word);
                    max_chain_length = max(max_chain_length, chain_length);
                }
            }

            word_chain_length[word] = max_chain_length;
            return max_chain_length;
        };

        int max_length = 0;
        for (const string& word : words) {
            max_length = max(max_length, findChain(word));
        }

        return max_length;
}
};
