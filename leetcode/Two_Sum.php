<?php

/*
Given an array of integers nums and an integer target, return indices
of the two numbers such that they add up to target.You may assume that
each input would have exactly one solution, and you may not use the 
same element twice. You can return the answer in any order.
*/

/**
 * @param int[] $nums
 * @param int $target
 * @return int[]
 */
function twoSum($nums, $target) {
    $diff = [];
    foreach ($nums as $index => $num) {
        if (isset($diff[$target-$num])){
            return [$index, $diff[$target-$num]];
        }
        $diff[$num] = $index;
    }

}

// An example
$nums = [2,7,11,15]; 
$target = 9;
// Result array = [1, 0]
echo var_dump(twoSum($nums, $target));
