#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    for (auto num : nums) {
        cout << "Range-based for loop: " << num << endl;
    }
    return 0;
}