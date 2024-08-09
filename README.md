# Longest Common Prefix in C++

## Summary

This project implements a C++ solution to find the longest common prefix among an array of strings. The longest common prefix is the largest string that is a prefix of all the strings in the array. If no common prefix exists, the function returns an empty string `""`.

### Approach

The solution uses the **Horizontal Scanning** method, where the first string is taken as the initial prefix and compared with each subsequent string. The prefix is progressively shortened until it matches the common prefix among all the strings.

### Time Complexity

- **Worst Case:** \( O(N \times M) \), where:
  - \( N \) is the number of strings in the array.
  - \( M \) is the length of the shortest string in the array.

## Longest Common Prefix in C++

The C++ implementation efficiently determines the longest common prefix among the given array of strings. It handles edge cases such as when the array is empty or when there is no common prefix among the strings.

## Usage

1. **Compile:** Use a C++ compiler to compile the code.
2. **Run:** Execute the compiled program to find the longest common prefix for the provided input.

## Example Cases

- **Input:** `["flower", "flow", "flight"]`
  - **Output:** `"fl"`

- **Input:** `["dog", "racecar", "car"]`
  - **Output:** `""` (No common prefix)
