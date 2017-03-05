Templated aliases
=================

Sometimes templates get more than one template parameters, and we would like to our aliases to leave one or more to be defined when used. Until C++11 it required elaborate tricks, as `typedef` could not be templated. This problem is gone with `using`. Example:

```cpp
template <typename T>
using UselessAliasedList = std::list<T>;

UselessAliasedList<std::string> listOfStrings;
```

In our example we have three `using` directives which can be templated pretty easily. Try to do it.
