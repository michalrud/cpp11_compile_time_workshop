auto
====

Tired of repeating long type names? Try using `auto` when it's
not ambiguous what type do you mean.

While we are at it, try using a new range-based loop:
```c++
for (auto element : container) {
    // operations
}
```

Take care to avoid unnecessary copying!