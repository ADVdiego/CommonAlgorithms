# CommonAlgorithms
Includes the most common algorithms needed for interviews

Implement the following data structures or algorithms, consider having one commit per implementation. Each implementation must include its unit tests. Use C++11 and C++14, consider including lambda expressions and templates.

- Linked list
- Reverse linked list
- Hash map
- Binary tree
- Lower and upper bound search in binary tree
- Find the longest string in a file
- Find the string that repeats the most in a file

Build and Run
-------------

- Requirements: 
    - **g++5 or greater**, tested code successfully with g++ 5.4.1.
    - **CMake 3.0 or greater**.

- To build code:

        $cd CommonAlgorithms
        $mkdir Build
        $cd Build
        $cmake ../Source
        $make -j$(nproc)

- To run unit tests:

        $cd Build

    Any of the 3 commands work:

        $./UnitTestsRun
        $ctest RunTests -VV 
        $make test

License
-------

- [MIT](https://github.com/ADVdiego/CommonAlgorithms/blob/master/LICENSE.txt)
