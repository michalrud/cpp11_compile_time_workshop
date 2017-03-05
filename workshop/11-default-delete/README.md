default and delete
==================

Before C++11 the way to make a class noncopyable was to declare its copy constructor private. Same applied when a programmer wanted to disable the ability to use a default constructor without any parameters.

C++11 allows for an easier way to do the same: one can now *delete* a constructor. Example is as follows:

```cpp
class Noncopyable {
public:
    Noncopyable() = delete;
};
```

There's also way to force compiler to create a default implementation of constructor or destructor:

```cpp
class DefaultConstructibleAndDestroyable {
public:
    DefaultConstructibleAndDestroyable() = default;
    ~DefaultConstructibleAndDestroyable() = default;
}
```

In case of constructors compiler behaves just like it would with empty constructor body and empty initializer list, but allows the compiler to treat the structure as POD, what is not possible with user-defined constructor, even if it's empty.

In this example your task is to make the class noncopyable using `delete` keyword.

In this example the assignment operator may produce a warning, as it's not returning anything. Deleting it will also solve this issue without having to implement a function, which would not be used anyway.
