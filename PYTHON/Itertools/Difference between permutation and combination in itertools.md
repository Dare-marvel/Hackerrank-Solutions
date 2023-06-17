`itertools.permutations` and `itertools.combinations` are two functions in the `itertools` module in Python that generate permutations and combinations of an input iterable, respectively.

The main difference between permutations and combinations is that permutations consider order while combinations do not. In other words, a permutation is an ordered arrangement of elements while a combination is an unordered selection of elements.

For example, let's say we have a list `['A', 'B', 'C']` and we want to generate all 2-length permutations and combinations of this list. Using `itertools.permutations`, we get the following result: `[('A', 'B'), ('A', 'C'), ('B', 'A'), ('B', 'C'), ('C', 'A'), ('C', 'B')]`. Notice that the order of the elements matters, so `('A', 'B')` and `('B', 'A')` are considered two different permutations.

On the other hand, using `itertools.combinations`, we get the following result: `[('A', 'B'), ('A', 'C'), ('B', 'C')]`. Notice that the order of the elements doesn't matter, so only one combination is generated for each pair of elements.

Is there anything else you'd like to know?
