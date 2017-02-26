Extern templates
================

When using a template classes, its implementation is being generated for every compilation unit. When there are many compilation units, it is generated many times and then stripped during the linking phase, so it is not a problem from binary size point of view.

The only issue here is that the compilation time is increased with every compilation unit.

`extern template` should help with that.
