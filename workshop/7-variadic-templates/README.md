Variadic templates
==================

Just one look at the `main.cpp` makes the problem obvious. Fortunately, C++11 allows us to eliminate the repetition here thanks to variadic templates.

The example now shows how vaguely the generated code will look like when the actual code is generated.

Example
-------

```cpp
template<typename T, typename... Ts>
T func(T n, Ts... Vs)
{
    // This will call func with all the parameters omitting the first one.
    func(Vs...);
}
```
