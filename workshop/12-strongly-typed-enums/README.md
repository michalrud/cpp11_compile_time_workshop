Strongly-typed enums
====================

In C or C++ regular enums are little more than just named int values, what often caused programming errors.

In attached example you can find one of these errors. Try to substitute regular enums found there with strongly typed enums to make the compiler do the job of finding where is the issue. Some newer compilers will issue a warning here even with plain enums, but with strongly typed enums you can't override this with a simple compiler flag.

Example of strongly typed enum is:

```cpp
enum class Enum {};
```

or:

```cpp
enum struct Enum {};
```
