#include <iostream>
#include <vector>


std::vector<int> TwoSum(std::vector<int> nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    } return {-1, -1};
}

int main() {
    
    std::vector<int> array = {2, 3, 6, 8};
    int target = 9;
    
    std::vector<int> resul = TwoSum(array, target);
    
    std::cout << "Indices: " << resul[0] << " e " <<resul[1] << " = " << target << std::endl;
    std::cout << "Valores: " << array[resul[0]] << " e " << array[resul[1]] << " = " << target << std::endl;

    return 0;
}
