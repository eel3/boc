boc (byte order checker)
========================

Command line tool to show byte order (endianness).

License
-------

zlib License.

Target environments
-------------------

Windows, Linux, Mac OS X.

boc is written in ANSI C99, and so probably works fine on other OS.

Set up
------

1. Compile boc.c. Use make and Makefile.
2. Put boc in a directory registered in PATH.

| toolset                            | Makefile                 |
|:-----------------------------------|:-------------------------|
| Linux                              | Makefile                 |
| Mac OS X                           | Makefile\_mac            |
| MinGW/TDM-GCC (with GNU make)      | Makefile\_mingw          |
| MinGW-w64/TDM64-GCC (32bit binary) | Makefile\_mingw64\_32bit |
| Microsoft Visual C++ (with NMAKE)  | Makefile\_vc\_nmake      |

Usage
-----

Simply execute `boc`. boc has no option.

Example
-------

    $ boc
    little-endian
    $ _
