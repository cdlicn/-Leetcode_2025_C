#include "bits/stdc++.h"

using namespace std;

int minOperations(vector<int> &nums, int k) {
    int res = 0;
    for (const auto &num: nums) {
        if (num < k) {
            res++;
        }
    }
    return res;
}