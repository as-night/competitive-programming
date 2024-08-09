# 4A - Watermelon

## Idea behind the solution
At first, simply dividing the watermelon's weight, `w`, by 2 seems
like a good idea. Unfortunately, an easy counterexample, namely
`w = 2`, shows that the problem warrants a better strategy.

Weights `w` equal to 1, 2, and 3 can't satisfy the solution - 4 is the
first number that can be "cut" into two even numbers.

5, again, is no good. Both `1 - 4`a and `2 - 3` fail. Number 6:
`1 - 5 (no)`, `2 - 4 (yes)`, `3 - 3 (no)` - is ok.

For the next 4 integers, the cuts are as follows:
```
7: 1 - 6 (no), 2 - 5 (no), 3 - 4 (no).
8: 1 - 7 (no), 2 - 6 (yes), 3 - 5 (no), 4 - 4 (yes).
9: 1 - 8 (no), 2 - 7 (no), 3 - 6 (no), 4 - 5 (no).
10: 1 - 9 (no), 2 - 8 (yes), 3 - 7 (no), 4 - 6 (yes), 5 - 5 (no).
```
It's easy to see that no matter how hard you try, odd numbers can't be
represented as a sum of two even numbers.

The conclusion simply follows from the well-known mathematical fact:
the sum of two even numbers is always even, whereas the sum of two odd
numbers, or an even and odd number, is always odd.

Simple proof of the property goes as follows:

We can represent even numbers in the form `2 * n`, where `n` is one of
the numbers: 0, 1, 2, 3, ..., and so on. The odd numbers take the form
`2 * n + 1`.

So, if we take two even numbers, say `2 * n` and `2 * k`, `n` and `k`
their sum equals:
```
(2 * n) + (2 * k) = 2n + 2k = 2 * (n + k)
```
But `(n + k)` is also one of the numbers: 0, 1, 2, 3, ..., etc. Let's
call that number `s`. And `2 * (n + k)` is just `2 * s` - and even!

Check the math for two odd numbers or an odd and even number yourself
to verify that it really is true.

In lieu of what we've found, the solution turns out to be pretty
simple: check if the number `w` is even; if it's not, we can't split
it into two even numbers, and if it is, we can - provided that the
number itself is equal to or greater than 4.

## Implementation - points to note
To "optimize" the solution, i.e., minimize the number of checks, we
really should test `w` for evenness first - this eliminates all the
odd numbers right off the bat. If `w` is even, we have to perform one
additional but neccessary check: the number `w` itself has to be equal
to or grater than 4; otherwise the number can't be split into two even
numbers.
