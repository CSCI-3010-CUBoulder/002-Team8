#include "UtilityFunctions.h"

std::vector<bool> UtilityFunctions::EvenMask(std::vector<int> nums){
    std::vector<bool> even;
    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] % 2){ // if its odd will pushback 0 for false
            even.push_back(0);
        } else{ // if it is even will pushback 1 for true
            even.push_back(1);
        }
    }
    return even;
}

int UtilityFunctions::Factorial(int n){
  int FacSum = 1;
  if(n == 0){
    return 1;
  }
  for (int i = 1; i <= n; i++) {
    FacSum = FacSum * i;
  }
  return FacSum;
}