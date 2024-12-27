//Geeks for geeks
/* map<int, int> mpp; // Map to store frequencies
        vector<int> frequencies; // Vector to store result
        
        // Count frequencies of all elements
        for (int i = 0; i < arr.size(); i++) {
            mpp[arr[i]]++;
        }

        // Fill the result vector with frequencies
        for (int i = 1; i <= arr.size(); i++) {
            // Push frequency of 'i' (or 0 if not present)
            frequencies.push_back(mpp[i]);
        }
        
        return frequencies;
    }*/

#include <iostream>
#include <unordered_map>
#include <climits> 
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    int maxFreq = INT_MIN, minFreq = INT_MAX;
    int maxFreqElement, minFreqElement;

    for (auto it : mpp) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxFreqElement = it.first;
        }
        if (it.second < minFreq) {
            minFreq = it.second;
            minFreqElement = it.first;
        }
    }

    cout << "Highest Frequency Element: " << maxFreqElement << " (Frequency: " << maxFreq << ")" << endl;
    cout << "Lowest Frequency Element: " << minFreqElement << " (Frequency: " << minFreq << ")" << endl;

    // Query section (Optional)
    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }

    return 0;
}