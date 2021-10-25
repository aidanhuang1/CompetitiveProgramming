You know that you can use binary search to solve a problem when it involves a predicate
ex. a series of false answers until it reaches a point where all the answers after it are
true false, false, false, false, true, true, true, true, true, ...... true

For observing the elements, use the following syntax:

for (const auto& elem : container)    // capture by const reference
If the objects are cheap to copy (like ints, doubles, etc.), it's possible to use a slightly simplified form:

  for (auto elem : container)    // capture by value
For modifying the elements in place, use:

for (auto& elem : container)    // capture by (non-const) reference
If the container uses "proxy iterators" (like std::vector<bool>), use:

  for (auto&& elem : container)    // capture by &&
Of course, if there is a need to make a local copy of the element inside the loop body, capturing by value (for (auto elem : container)) is a good choice.



https://stackoverflow.com/questions/15927033/what-is-the-correct-way-of-using-c11s-range-based-for
