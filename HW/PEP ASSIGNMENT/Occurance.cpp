#include <iostream>
#include <unordered_map>

using namespace std;

// Function to find repetitions and the most frequent number
bool R(int arr[], int n, int &m) {
    // Create a map to store the frequency of each number
    unordered_map<int, int> freqMap;

    // Count the occurrences of each number
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;  // Increment the count for the current number
    }

    // Check for repetitions and find the most frequent number
    bool R = false;
    int maxCount = 0;  // To track the highest frequency

    for (auto pair : freqMap) {  // Loop through each number and its count
        if (pair.second > 1) {  // If a number appears more than once, there's repetition
            R = true;
        }#include <iostream>

using namespace std;

int main() {
  int arr[] = {1, 2, 1, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Create an array to store counts of each number
  int counts[100] = {0}; // Assume all numbers are between 0 and 99 for simplicity

  // Count occurrences of each element
  for (int i = 0; i < n; i++) {
    counts[arr[i]]++;
  }

  // Find the index with the highest count
  int maxCount = 0;
  int mostFrequent = arr[0];
  for (int i = 1; i < 100; i++) {
    if (counts[i] > maxCount) {
      maxCount = counts[i];
      mostFrequent = i;
    }
  }

  // Check if there's at least one occurrence
  if (maxCount > 0) {
    cout << "Most frequent number: " << mostFrequent << " (appears " << maxCount << " times)" << endl;
  } else {
    cout << "No repeated numbers found" << endl;
  }

  return 0;
}

        if (pair.second > maxCount) {  // Update the most frequent number and its count
            mostFrequent = pair.first;
            maxCount = pair.second;
        }
    }

    return hasRepetition;  // Return true if repetitions exist, false otherwise
}

int main() {
    int arr[] = {1, 2, 1, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int most = 0;  // To store the most frequent number

    if (hasRepetitionAndMostFrequent(arr, n, most)) {
        cout << "Repetition found: true" << endl;
        cout << "Most frequent number: " << most << endl;
    } else {
        cout << "Repetition found: false" << endl;
    }

    return 0;
}
