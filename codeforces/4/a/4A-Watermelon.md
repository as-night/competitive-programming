# 4A - Watermelon

## Idea behind the solution
At first, the idea of simply dividing the watermelon's weight, *w*,
by 2 seems to give the correct result. Unfortunately, an easy
counterexample, namely w = 2, shows that the problem warrants a better
strategy.

Weights *w* equal to 1, 2, and 3 can't satisfy the solution - 4 is the
first number that meets the problem criteria.

5, again, is no good. Both `1 - 4` and `2 - 3` fail. Number 6:
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
numbers, or an even and an odd number, is always odd.

Simple proof of the property goes as follows:

We can represent even numbers in the form `2 * n`, where `n` is one of
the numbers: 0, 1, 2, 3..., and so on. The odd numbers take the form
`2 * n + 1`.

So, if we take two even numbers, say `2 * n` and `2 * k`, `n` and `k`
not necessarily the same, their sum equals:
```
2 * n + 2 * k = 2n + 2k = 2 * (n + k)
```
But `(n + k)` is also one of the numbers: 0, 1, 2, 3..., etc. Let's
call that number *s*. And `2 * (n + k)` is just `2 * s` - and even!

Do the math for two odd numbers or an odd and even number yourself to
verify that it really is true.

In lieu of what we've found, the solution turns out to be pretty
simple: check whether the number *w* is even; if it's not, we can't
split it into two even numbers, and if it is, we can - provided that
the number itself is equal to or greater than 4.

## Implementation - points to note
To "optimize" the solution, i.e., minimize the number of checks, we
really should test if *w* is even first - this eliminates all the odd
numbers right off the bat. If *w* is even, take care of the fact that
it has to be no lower than 4 (otherwise the scheme for the cut won't
work).

That's it. The whole spiel. Done.
