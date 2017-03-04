override and final
==================

`override` lets you make *sure* that you will override some virtual method using the method declaration described with it.

On the other hand, `final` keyword guarantees that no deriving class will be able to further override the method described with it, or if the whole class is marked with it, then that it's not possible to derive from the whole class.

There's a bug in the example code. You can probably find it easily by yourself, but we've got computers so we can make them do the work instead of us. Try using the `override` keyword to make the compiler spot the bug.

You can also try to play with the `final` keyword and see how the compiler reacts.