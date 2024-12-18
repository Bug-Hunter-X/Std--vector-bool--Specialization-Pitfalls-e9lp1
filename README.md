# std::vector<bool> Gotchas
This example demonstrates unexpected behavior when using `std::vector<bool>`.  Because of its specialization, it doesn't follow the standard STL container interface. This can lead to subtle bugs, reduced performance, and unexpected memory management.

The `bug.cpp` file shows how trying to use it like a regular `vector` of other types can fail.  The `bugSolution.cpp` demonstrates using `std::vector<uint8_t>` or a different strategy as a more reliable alternative. 