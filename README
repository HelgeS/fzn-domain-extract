# FlatZinc Domain Extraction

Simple tool to extract the domains of variables from a [MiniZinc](https://www.minizinc.org/), which has been converted to FlatZinc.
It is based on the [FlatZinc skeleton parser from the Gecode CP solver](https://www.gecode.org/flatzinc.html).

Just type `make` and afterwards the executable `fz` can be used:
```
$ fz sample.fzn
{0..20}|{1..10}|{1,2,4,5,6,7,8,9,10}|{1..10}|{1..10}
```

The output is the list of domains in alphabetical order of the MiniZinc variable names.
Only variables which are not fixed within the FlatZinc model are considered and arrays are recursively printed.
Each entry is separated with a `|`.


More information from the original ReadMe:

```
Compile the *.cpp files using your favorite C++ compiler (tested with gcc 4.2
and Microsoft Visual C++ 2008). If you want to rebuild the lexer and parser
from the sources, you need flex (version 2.5.33 or better) and bison (version
2.3 or better), and run the following commands:

flex -olexer.yy.cpp lexer.lxx
bison -t -o parser.tab.cpp -d parser.yxx

If you want to use the parser as a library, link the object code from all .cpp
files except fz.cpp with you own code. The file fz.cpp contains a main method
that constructs a parser and executes a FlatZinc program, so you can use this
to get a standalone executable.

The code archive contains a Makefile that should build the standalone fz
executable on any platform where a recent version of gcc and make are
installed.
```
