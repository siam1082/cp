#include<bits/stdc++.h>
using namespace std;

void soln() {
    int n; 
    cin >> n;
    vector<int> v;
    int x = n / 2;
    
    // Find all divisors of n (excluding n itself)
    for (int i = 2; i <= x; i++) {
        if (n % i == 0) {
            v.push_back(i);
        }
    }
    
    if (v.empty()) {
        cout << 1 << endl;  // No divisors, so the longest consecutive sequence is 1
        return;
    }
    
    int count = 1;  // To count consecutive divisors
    int maxx = 1;   // To store the max sequence length
    
    // Iterate through the divisors to find the longest consecutive sequence
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i + 1] - v[i] == 1) {
            count++; // Consecutive divisors found
        } else {
            maxx = max(maxx, count); // Update max sequence length
            count = 1; // Reset count for a new sequence
        }
    }
    
    // After the loop ends, we must check one last time to update maxx
    maxx = max(maxx, count);
    
    cout << maxx << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        soln();
    }
}
