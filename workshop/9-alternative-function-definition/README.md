Alternative function declaration + decltype
===========================================

You've surely noticed that the `sum` function is almost repeated. This is the exact place where C++ templates shine.

But is it possible to make the return value a template type as well?
Try to make it in a way, that both arguments to the `sum` function can have different type.

You will probably need `decltype`, which allows you to get the type returned by an expression. For example:

```cpp
void function() {
    int a;
    double b;
    decltype(a+b) c; // will have the type returned by sum operator
                     // on int and double
    auto d = a + b;  // same as here
}
```

Also: `decltype` allows for the uncommon situation in C++ where `()` and `(())` is not the same. Do you know, when?
