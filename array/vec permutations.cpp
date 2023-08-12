#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<pair<int, int>> countOccurrences(vector<int>& nums) {
    map<int, int> countMap;
    vector<pair<int, int>> result;

    for (int num : nums) {
        countMap[num]++;
    }

    for (auto it = countMap.begin(); it != countMap.end(); ++it) {
        result.push_back(make_pair(it->first, it->second));
    }

    sort(result.begin(), result.end(), compare);

    return result;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<pair<int, int>> result = countOccurrences(nums);

    cout << "Resultant array:" << endl;
    for (auto& pair : result) {
        while(pair.second>0)
        {
        	cout<<pair.first<<" ";
        	pair.second--;
		}
    }

    return 0;
}
