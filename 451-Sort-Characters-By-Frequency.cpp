class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char, int> freqMap;
        for (char ch : s) {
            freqMap[ch]++;
        }
        vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());
        sort(freqVec.begin(), freqVec.end(), [](const pair<char, int> &a, const pair<char, int> &b) {
            return a.second > b.second;
        });
        string result;
        for (const auto &entry : freqVec) {
            result.append(entry.second, entry.first);
        }

        return result;
    }
};