#include "UtilityFunctions.h"

std::vector<bool> UtilityFunctions::EvenMask(std::vector<int> nums){
    std::vector<bool> even;
    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] % 2){ // if its even will pushback 1 for true
            even.push_back(1);
        } else{ // if it is odd will pushback 0 for false
            even.push_back(0);
        }
    }
    return even;
}