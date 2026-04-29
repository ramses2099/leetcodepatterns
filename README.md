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

## Sliding Window
Sliding Window is essentially a sub-type of the two-pointer technique. While the standard two-pointer approach often has pointers moving towards each other, a Sliding Window usually has both pointers moving in the same direction to represent a "window" or a sub-range of data.

Think of it like a camera lens moving across a landscape. Instead of re-calculating the entire frame every time you move an inch, you just look at what entered the frame on the right and what left the frame on the left.
The Core Concept

The goal is to convert nested loops (O(n2)) into a single pass (O(n)) by maintaining a running result of the current window.
There are two types:

    Fixed Size: The window is always K elements wide (e.g., "Find the max sum of any 3 consecutive elements").

    Variable Size: The window expands until a condition is met, then shrinks to find the smallest valid range (e.g., "Find the shortest subarray with a sum ≥X").

## Binary search
Binary search is the gold standard for searching in sorted data. While a linear search checks every element (O(n)), binary search uses a "divide and conquer" strategy to find the target in logarithmic time (O(logn)).

From an engineering perspective, this is the difference between checking 1,000,000 items one-by-one versus finding the answer in just 20 steps.

## Monotonic Stack
The Monotonic Stack is one of the most non-intuitive yet powerful patterns for solving "Next Greater Element" or "Nearest Smaller Element" problems.

While a standard stack is just Last-In-First-Out (LIFO), a Monotonic Stack maintains its elements in a specific order—either strictly increasing or strictly decreasing. To keep this order, you must pop elements that "violate" the rule before pushing a new one.
How it Works

Think of it like a line of people of different heights. If a new, taller person arrives and you want a "strictly decreasing" stack, everyone shorter than the newcomer must leave the line before the newcomer joins.

    Monotonic Increasing: 1,3,6,10 (New elements must be greater than the top).

    Monotonic Decreasing: 10,6,3,1 (New elements must be smaller than the top).