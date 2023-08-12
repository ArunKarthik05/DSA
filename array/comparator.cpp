#include <iostream>
#include <vector>
#include <algorithm>

bool comparator(std::pair<int, int> a, std::pair<int, int> b) {
    if (a.first == b.first) {
        return a.second > b.second;
    }
    return a.first > b.first;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs: ";
    std::cin >> n;

    std::vector<std::pair<int, int>> pairs(n);
    std::cout << "Enter the pairs (first and second values separated by space): " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> pairs[i].first >> pairs[i].second;
    }

    std::sort(pairs.begin(), pairs.end(), comparator);

    std::cout << "Sorted pairs in descending order:" << std::endl;
    for (auto pair : pairs) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }

    return 0;
}

