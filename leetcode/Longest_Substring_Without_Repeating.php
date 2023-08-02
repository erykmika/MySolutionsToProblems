<?php

/*
Given a string s, find the length of the longest
substring without repeating characters.
*/

/**
 * @param String $s
 * @return Integer
 */
function lengthOfLongestSubstring($s) {

    // Check if a string is empty
    if (empty($s)) {
        return 0;
    }

    // Create a sliding window and find the longest substring matching the condition
    $current_len = 0;
    $max_len = 0;

    $char_count = strlen($s);
    $hash_table = [];

    $left_index = 0;
    $right_index = 0;

    while ($left_index < $char_count && $max_len < $char_count - $left_index) {
        if (!empty($hash_table[$s[$right_index]])) {
            $hash_table[$s[$left_index]] = false;
            if ($left_index != $right_index) {
                $left_index++;
                $current_len--;
            }
        } else {
            $current_len++;
            $hash_table[$s[$right_index]] = true;
            $right_index++;
            if ($current_len > $max_len) {
                $max_len = $current_len;
            }
        }
    }
    return $max_len;
}


// An example (all tests have been succesfully passed)
$test_str = "aaaaaaaaaaaaaaaaaaaaaaatyuwqbbbbbbbbbbbaaaaaaaaa";
// Output: 7
echo lengthOfLongestSubstring($test_str);
