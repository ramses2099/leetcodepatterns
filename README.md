# leetcodepatterns
Leet code pattern solve problems

## Two Pointers Patterns
the Two-Pointer Technique not just as a "coding trick," but as a critical optimization pattern for reducing time complexity from quadratic O(n2) to linear O(n).

In its simplest form, you use two indices (pointers) to traverse a data structure—typically an array or linked list—simultaneously. Instead of nested loops, you coordinate the movement of these pointers to find a target value or satisfy a condition in a single pass.

Two Common Patterns
1. The "Opposite Ends" Approach

This is used on sorted arrays. You place one pointer at the start and one at the end, moving them toward each other based on a comparison.

    Best for: Searching for pairs (Sum problems), Reversing strings, Palindrome checks.

2. The "Slow & Fast" (Tortoise and Hare) Approach

One pointer moves faster than the other (e.g., one step vs. two steps).

    Best for: Detecting cycles in linked lists, finding the middle of a list, or removing duplicates.