# 50A - Domino piling

Constraints of the problem statement make the solution easy: if the
`M x N` rectangle has even number of constituting squares, return
`M x N / 2` as the answer; if the rectangle has odd number of squares,
substract one from the total (to get an even number), and then divide
the resulting number by 2: `(M x N - 1) / 2`.
