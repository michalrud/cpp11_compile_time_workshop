Generalized constant expressions
================================

Some computed values don't change, therefore can be computed at compile time.
To do so, use a `constexpr` keyword.

If your code can be a proper `constexpr`, it should be possible to do `static_assert` on it, which are like a regular assertions, but done at compile time (and, therefore, require a constant expression as a parameter). You can have a simple UT during compile time!

Question: *When a compiler won't make a function constant despite a constexpr keyword?*
