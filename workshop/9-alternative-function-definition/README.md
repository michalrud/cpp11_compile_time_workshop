Alternative function declaration
================================

You've surely noticed that the `sum` function is almost repeated. This is the exact place where C++ templates shine.

But is it possible to make the return value a template type as well?
Try to make it in a way, that both arguments to the `sum` function can have different type.

You will probably need `decltype`.

