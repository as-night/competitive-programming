# 1A - Theatre Square

The trick here is to realize that the initial `ceil(n/a) + ceil(m/a)`
should be replaced with `ceil(n/a) * ceil(m/a)`. That gets rid of
unnecessary (and ugly!) `else-if` statements for special cases.

Also, take special care with `C++` to avoid integer overflows or
erroneous answers: the input variables should be of type `double` and
the answer should be casted to `long long` in order to be printed
correctly as an integer but without exponential notation or overflows.
