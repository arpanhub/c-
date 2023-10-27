#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> ans;
    int s = 0;
    int e = numbers.size() - 1;
    while (s <= e) {
        if ((numbers[s] + numbers[e]) == target) {
            ans.push_back(s + 1);
            ans.push_back(e + 1);
            break;
        } else if ((numbers[s] + numbers[e]) < target) {
            s++;
        } else {
            e--;
        }
    }
    return ans;
}

int main() {
    vector<int> numbers = {2, 7, 11, 15, 6, 3};
    int target = 9;
    
    vector<int> result = twoSum(numbers, target);

    if (result.size() == 2) {
        cout << "Indices of two numbers that add up to the target " << target << " are: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No such pair found." << endl;
    }
    return 0;
}
