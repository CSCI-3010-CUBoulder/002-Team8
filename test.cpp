#define CATCH_CONFIG_MAIN 
#include "catch.hpp"
#include "UtilityFunctions.h"


bool is_equal(std::vector<bool> nums, std::vector<bool> ck_nums_list);


TEST_CASE("Checking the factorial method") {
    UtilityFunctions* f = new UtilityFunctions();
    
    REQUIRE(f->Factorial(1) == 1);
    REQUIRE(f->Factorial(2) == 2);
    REQUIRE(f->Factorial(10) == 3628800);

    free(f);
}

TEST_CASE() {
    UtilityFunctions* f = new UtilityFunctions();
    
    REQUIRE(is_equal(f->EvenMask({1, 2, 3, 4, 5}),{false, true, false, true, false}) == 1);
    REQUIRE(is_equal(f->EvenMask({2, 2, 8, 4, 5}),{true, true, true, true, false}) == 1);
    REQUIRE(is_equal(f->EvenMask({281, 981, 1021, 431, 1}),{false, false, false, false, false}) == 1);
    
}


bool is_equal(std::vector<bool> nums, std::vector<bool> ck_nums_list){
    bool are_list_same = true;

    if(nums.size() != ck_nums_list.size()){
        return !(are_list_same);
    }

    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] != ck_nums_list[i]){
            are_list_same = false;
        }
    }
    return are_list_same;
}